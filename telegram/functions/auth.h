// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_AUTH
#define LQTG_FNC_AUTH

#include "telegramfunctionobject.h"
#include "telegram/types/authcheckedphone.h"
#include <QString>
#include "telegram/types/authsentcode.h"
#include <QtGlobal>
#include "telegram/types/authauthorization.h"
#include <QList>
#include "telegram/types/authexportedauthorization.h"
#include <QByteArray>
#include "telegram/types/authpasswordrecovery.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Auth : public TelegramFunctionObject
{
public:
    enum AuthFunction {
        fncAuthCheckPhone = 0x6fe51dfb,
        fncAuthSendCode = 0x768d5f4d,
        fncAuthSendCall = 0x3c51564,
        fncAuthSignUp = 0x1b067634,
        fncAuthSignIn = 0xbcd51581,
        fncAuthLogOut = 0x5717da40,
        fncAuthResetAuthorizations = 0x9fab0d1a,
        fncAuthSendInvites = 0x771c1d97,
        fncAuthExportAuthorization = 0xe5bfffcd,
        fncAuthImportAuthorization = 0xe3ef9613,
        fncAuthBindTempAuthKey = 0xcdd42a05,
        fncAuthSendSms = 0xda9f3e8,
        fncAuthImportBotAuthorization = 0x67a3ff2c,
        fncAuthCheckPassword = 0xa63011e,
        fncAuthRequestPasswordRecovery = 0xd897bc66,
        fncAuthRecoverPassword = 0x4ea56e92
    };

    Auth();
    virtual ~Auth();

    static bool checkPhone(OutboundPkt *out, const QString &phoneNumber);
    static AuthCheckedPhone checkPhoneResult(InboundPkt *in);

    static bool sendCode(OutboundPkt *out, const QString &phoneNumber, qint32 smsType, qint32 apiId, const QString &apiHash, const QString &langCode);
    static AuthSentCode sendCodeResult(InboundPkt *in);

    static bool sendCall(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash);
    static bool sendCallResult(InboundPkt *in);

    static bool signUp(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash, const QString &phoneCode, const QString &firstName, const QString &lastName);
    static AuthAuthorization signUpResult(InboundPkt *in);

    static bool signIn(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash, const QString &phoneCode);
    static AuthAuthorization signInResult(InboundPkt *in);

    static bool logOut(OutboundPkt *out);
    static bool logOutResult(InboundPkt *in);

    static bool resetAuthorizations(OutboundPkt *out);
    static bool resetAuthorizationsResult(InboundPkt *in);

    static bool sendInvites(OutboundPkt *out, const QList<QString> &phoneNumbers, const QString &message);
    static bool sendInvitesResult(InboundPkt *in);

    static bool exportAuthorization(OutboundPkt *out, qint32 dcId);
    static AuthExportedAuthorization exportAuthorizationResult(InboundPkt *in);

    static bool importAuthorization(OutboundPkt *out, qint32 id, const QByteArray &bytes);
    static AuthAuthorization importAuthorizationResult(InboundPkt *in);

    static bool bindTempAuthKey(OutboundPkt *out, qint64 permAuthKeyId, qint64 nonce, qint32 expiresAt, const QByteArray &encryptedMessage);
    static bool bindTempAuthKeyResult(InboundPkt *in);

    static bool sendSms(OutboundPkt *out, const QString &phoneNumber, const QString &phoneCodeHash);
    static bool sendSmsResult(InboundPkt *in);

    static bool importBotAuthorization(OutboundPkt *out, qint32 flags, qint32 apiId, const QString &apiHash, const QString &botAuthToken);
    static AuthAuthorization importBotAuthorizationResult(InboundPkt *in);

    static bool checkPassword(OutboundPkt *out, const QByteArray &passwordHash);
    static AuthAuthorization checkPasswordResult(InboundPkt *in);

    static bool requestPasswordRecovery(OutboundPkt *out);
    static AuthPasswordRecovery requestPasswordRecoveryResult(InboundPkt *in);

    static bool recoverPassword(OutboundPkt *out, const QString &code);
    static AuthAuthorization recoverPasswordResult(InboundPkt *in);

};

}
}

#endif // LQTG_FNC_AUTH