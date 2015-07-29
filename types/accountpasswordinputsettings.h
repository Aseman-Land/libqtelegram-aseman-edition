#ifndef LQTG_ACCOUNTPASSWORDINPUTSETTINGS
#define LQTG_ACCOUNTPASSWORDINPUTSETTINGS

#include "telegramtypeobject.h"
#include <QString>
#include <QtGlobal>
#include <QByteArray>

class AccountPasswordInputSettings : public TelegramTypeObject
{
public:
    enum AccountPasswordInputSettingsType {
        typeAccountPasswordInputSettings = 0xbcfc532c
    };

    AccountPasswordInputSettings(AccountPasswordInputSettingsType classType = typeAccountPasswordInputSettings, InboundPkt *in = 0);
    AccountPasswordInputSettings(InboundPkt *in);
    virtual ~AccountPasswordInputSettings();

    void setEmail(const QString &email);
    QString email() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setHint(const QString &hint);
    QString hint() const;

    void setNewPasswordHash(const QByteArray &newPasswordHash);
    QByteArray newPasswordHash() const;

    void setNewSalt(const QByteArray &newSalt);
    QByteArray newSalt() const;

    void setClassType(AccountPasswordInputSettingsType classType);
    AccountPasswordInputSettingsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountPasswordInputSettings &b);

private:
    QString m_email;
    qint32 m_flags;
    QString m_hint;
    QByteArray m_newPasswordHash;
    QByteArray m_newSalt;
    AccountPasswordInputSettingsType m_classType;
};

#endif // LQTG_ACCOUNTPASSWORDINPUTSETTINGS
