#ifndef LQTG_ACCOUNTPASSWORD
#define LQTG_ACCOUNTPASSWORD

#include "telegramtypeobject.h"
#include <QByteArray>
#include <QString>

class AccountPassword : public TelegramTypeObject
{
public:
    enum AccountPasswordType {
        typeAccountNoPassword = 0x96dabc18,
        typeAccountPassword = 0x7c18141c
    };

    AccountPassword(AccountPasswordType classType = typeAccountNoPassword, InboundPkt *in = 0);
    AccountPassword(InboundPkt *in);
    virtual ~AccountPassword();

    void setCurrentSalt(const QByteArray &currentSalt);
    QByteArray currentSalt() const;

    void setEmailUnconfirmedPattern(const QString &emailUnconfirmedPattern);
    QString emailUnconfirmedPattern() const;

    void setHasRecovery(bool hasRecovery);
    bool hasRecovery() const;

    void setHint(const QString &hint);
    QString hint() const;

    void setNewSalt(const QByteArray &newSalt);
    QByteArray newSalt() const;

    void setClassType(AccountPasswordType classType);
    AccountPasswordType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountPassword &b);

private:
    QByteArray m_currentSalt;
    QString m_emailUnconfirmedPattern;
    bool m_hasRecovery;
    QString m_hint;
    QByteArray m_newSalt;
    AccountPasswordType m_classType;
};

#endif // LQTG_ACCOUNTPASSWORD
