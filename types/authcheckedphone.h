#ifndef LQTG_AUTHCHECKEDPHONE
#define LQTG_AUTHCHECKEDPHONE

#include "telegramtypeobject.h"

class AuthCheckedPhone : public TelegramTypeObject
{
public:
    enum AuthCheckedPhoneType {
        typeAuthCheckedPhone = 0x811ea28e
    };

    AuthCheckedPhone(AuthCheckedPhoneType classType = typeAuthCheckedPhone, InboundPkt *in = 0);
    AuthCheckedPhone(InboundPkt *in);
    virtual ~AuthCheckedPhone();

    void setPhoneRegistered(bool phoneRegistered);
    bool phoneRegistered() const;

    void setClassType(AuthCheckedPhoneType classType);
    AuthCheckedPhoneType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AuthCheckedPhone &b);

private:
    bool m_phoneRegistered;
    AuthCheckedPhoneType m_classType;
};

#endif // LQTG_AUTHCHECKEDPHONE
