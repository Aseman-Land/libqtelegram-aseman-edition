#ifndef ACCOUNTAUTHORIZATIONS
#define ACCOUNTAUTHORIZATIONS

#include <QtGlobal>
#include <QList>
#include "authorization.h"

class AccountAuthorizations
{
public:

    enum AccountAuthorizationsType {
       typeAccountAuthorizations = 0x1250abde
    };

    AccountAuthorizations() :
        m_classType(typeAccountAuthorizations) {}

    QList<Authorization> authorizations() const {
        return m_authorizations;
    }
    void setAccountAuthorizations(const QList<Authorization> &authorizations) {
        m_authorizations = authorizations;
    }
    void setClassType(AccountAuthorizationsType classType) {
        m_classType = classType;
    }
    AccountAuthorizationsType classType() const {
        return m_classType;
    }

private:
    QList<Authorization> m_authorizations;
    AccountAuthorizationsType m_classType;
};

#endif // ACCOUNTAUTHORIZATIONS
