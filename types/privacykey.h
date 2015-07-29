#ifndef LQTG_PRIVACYKEY
#define LQTG_PRIVACYKEY

#include "telegramtypeobject.h"

class PrivacyKey : public TelegramTypeObject
{
public:
    enum PrivacyKeyType {
        typePrivacyKeyStatusTimestamp = 0xbc2eab30
    };

    PrivacyKey(PrivacyKeyType classType = typePrivacyKeyStatusTimestamp, InboundPkt *in = 0);
    PrivacyKey(InboundPkt *in);
    virtual ~PrivacyKey();

    void setClassType(PrivacyKeyType classType);
    PrivacyKeyType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const PrivacyKey &b);

private:
    PrivacyKeyType m_classType;
};

#endif // LQTG_PRIVACYKEY
