#ifndef LQTG_ACCOUNTAUTHORIZATIONS
#define LQTG_ACCOUNTAUTHORIZATIONS

#include "telegramtypeobject.h"
#include <QList>
#include "authorization.h"

class AccountAuthorizations : public TelegramTypeObject
{
public:
    enum AccountAuthorizationsType {
        typeAccountAuthorizations = 0x1250abde
    };

    AccountAuthorizations(AccountAuthorizationsType classType = typeAccountAuthorizations, InboundPkt *in = 0);
    AccountAuthorizations(InboundPkt *in);
    virtual ~AccountAuthorizations();

    void setAuthorizations(const QList<Authorization> &authorizations);
    QList<Authorization> authorizations() const;

    void setClassType(AccountAuthorizationsType classType);
    AccountAuthorizationsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountAuthorizations &b);

private:
    QList<Authorization> m_authorizations;
    AccountAuthorizationsType m_classType;
};

#endif // LQTG_ACCOUNTAUTHORIZATIONS
