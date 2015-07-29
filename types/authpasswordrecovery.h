#ifndef LQTG_AUTHPASSWORDRECOVERY
#define LQTG_AUTHPASSWORDRECOVERY

#include "telegramtypeobject.h"
#include <QString>

class AuthPasswordRecovery : public TelegramTypeObject
{
public:
    enum AuthPasswordRecoveryType {
        typeAuthPasswordRecovery = 0x137948a5
    };

    AuthPasswordRecovery(AuthPasswordRecoveryType classType = typeAuthPasswordRecovery, InboundPkt *in = 0);
    AuthPasswordRecovery(InboundPkt *in);
    virtual ~AuthPasswordRecovery();

    void setEmailPattern(const QString &emailPattern);
    QString emailPattern() const;

    void setClassType(AuthPasswordRecoveryType classType);
    AuthPasswordRecoveryType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AuthPasswordRecovery &b);

private:
    QString m_emailPattern;
    AuthPasswordRecoveryType m_classType;
};

#endif // LQTG_AUTHPASSWORDRECOVERY
