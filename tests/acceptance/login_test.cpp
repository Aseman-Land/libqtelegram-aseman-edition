#include <gtest/gtest.h>

#include <QTest>
#include <QSharedPointer>
#include <QSignalSpy>

#include <telegram.h>

#include <tests/tests_config.h>

class LoginTest : public testing::Test
{
protected:
    void SetUp()
    {
    }

    void TearDown()
    {
        if (!mTelegram.isNull()) {
            mTelegram.clear();
        }
    }

    void createLib(const QString& phoneNumber = thePhoneNumber()) {
        mTelegram = QSharedPointer<Telegram>::create(
                    theDefaultHostAddress(), theDefaultHostPort(), theDefaultHostDcId(),
                    theAppId(), theAppHash(), phoneNumber, theConfigPath(), thePublicKeyFile());
    }

    QVariantMap doLogin(const QString& code = theCode()) {
        int argc = 0;
        char *argv[0];
        QCoreApplication a(argc, argv);

        // Init
        QSignalSpy authSpy(mTelegram.data(), SIGNAL(authNeeded()));

        mTelegram->init();

        EXPECT_TRUE(authSpy.wait(theTimeout()));
        EXPECT_EQ(authSpy.count(), 1);

        // Send code
        QSignalSpy codeSpy(mTelegram.data(), SIGNAL(authSendCodeAnswer(qint64,bool,qint32)));

        mTelegram->authSendCode();

        EXPECT_TRUE(codeSpy.wait(theTimeout()));
        EXPECT_EQ(codeSpy.count(), 1);

        QList<QVariant> arguments = codeSpy.takeFirst();
        EXPECT_TRUE(arguments.at(1).toBool()); // test phone is registered

        // Sign in
        QSignalSpy loggedInSpy(mTelegram.data(), SIGNAL(authLoggedIn(QVariantMap)));

        mTelegram->authSignIn(code);

        // if not worked signIn, try signUp (perhaps the phone number is not registered yet)
        if (!loggedInSpy.wait(theTimeout())) {
            mTelegram->authSignUp(code, "Acceptance", "Test");

            EXPECT_TRUE(loggedInSpy.wait(theTimeout()));
        }

        EXPECT_EQ(loggedInSpy.count(), 1);

        arguments = loggedInSpy.takeFirst();
        return arguments.at(0).toMap();
    }

QSharedPointer<Telegram> mTelegram;
};

TEST_F(LoginTest, authenticate_without_dc_migration)
{
    // dc 2 is the default working one
    createLib();
    doLogin();
}

TEST_F(LoginTest, authenticate_with_dc_migration)
{
    // dc 2 is the default working one
    createLib(phoneNumberAtDC(3));
    doLogin(codeAtDC(3));
}


/* TODO(rmescandon): It should be needed adding tests for
  - changing phone number after lib creation, first phone in default DC, new phone in default DC
  - changing phone number after lib creation, first phone in default Dc, new phone in other DC
  - changing phone number after lib creation, first phone in other DC, new phone in default DC
  - changing phone number after lib creation, first phone in other DC, new phone in same other DC
  - changing phone number after lib creation, first phone in other DC, new phone in different other DC
  - logout
 ...
 NOTE: When trying to execute some of these tests i notice there isn't management for USER_MIGRATE_X
 when executed authExportAuthorization() in DCProvider.transferAuth() process.

TEST_F(LoginTest, authenticate_changing_phone_after_lib_creation)
{
    // dc 2 is the default working one
    createLib();
    mTelegram->setPhoneNumber(phoneNumberAtDC(3));
    doLogin(codeAtDC(3));
}
*/

TEST_F(LoginTest, authenticate_and_review_settings)
{
    createLib();
    QVariantMap settings = doLogin();
    for (QMap<QString, QVariant>::const_iterator it = settings.constBegin(); it != settings.constEnd(); ++it) {
        qDebug() << "key:" << it.key() << "value:" << it.value();
    }
}
