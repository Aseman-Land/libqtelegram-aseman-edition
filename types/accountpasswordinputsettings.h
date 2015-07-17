#ifndef ACCOUNTPASSWORDINPUTSETTINGS
#define ACCOUNTPASSWORDINPUTSETTINGS

#include <QtGlobal>

class AccountPasswordInputSettings
{
public:

    enum AccountPasswordInputSettingsType {
       typeAccountPasswordInputSettings = 0xbcfc532c
    };

    AccountPasswordInputSettings() :
        m_classType(typeAccountPasswordInputSettings) {}

    QByteArray newSalt() const {
        return m_newSalt;
    }
    void setNewSalt(const QByteArray &newSalt) {
        m_newSalt = newSalt;
    }
    QByteArray newPasswordHash() const {
        return m_newPasswordHash;
    }
    void setNewPasswordHash(const QByteArray &newPasswordHash) {
        m_newPasswordHash = newPasswordHash;
    }
    QByteArray hint() const {
        return m_hint;
    }
    void setHint(const QByteArray &hint) {
        m_hint = hint;
    }
    QString email() const {
        return m_email;
    }
    void setEmail(const QString &email) {
        m_email = email;
    }
    void setClassType(AccountPasswordInputSettingsType classType) {
        m_classType = classType;
    }
    AccountPasswordInputSettingsType classType() const {
        return m_classType;
    }

private:
    QByteArray m_newSalt;
    QByteArray m_newPasswordHash;
    QByteArray m_hint;
    QString m_email;
    AccountPasswordInputSettingsType m_classType;
};

#endif // ACCOUNTPASSWORDINPUTSETTINGS
