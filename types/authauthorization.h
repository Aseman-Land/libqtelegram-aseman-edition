#ifndef LQTG_AUTHAUTHORIZATION
#define LQTG_AUTHAUTHORIZATION

#include "telegramtypeobject.h"
#include <QtGlobal>
#include "user.h"

class AuthAuthorization : public TelegramTypeObject
{
public:
    enum AuthAuthorizationType {
        typeAuthAuthorization = 0xf6b673a4
    };

    AuthAuthorization(AuthAuthorizationType classType = typeAuthAuthorization, InboundPkt *in = 0);
    AuthAuthorization(InboundPkt *in);
    virtual ~AuthAuthorization();

    void setExpires(qint32 expires);
    qint32 expires() const;

    void setUser(const User &user);
    User user() const;

    void setClassType(AuthAuthorizationType classType);
    AuthAuthorizationType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AuthAuthorization &b);

private:
    qint32 m_expires;
    User m_user;
    AuthAuthorizationType m_classType;
};

#endif // LQTG_AUTHAUTHORIZATION
