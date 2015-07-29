#ifndef LQTG_INPUTPRIVACYKEY
#define LQTG_INPUTPRIVACYKEY

#include "telegramtypeobject.h"

class InputPrivacyKey : public TelegramTypeObject
{
public:
    enum InputPrivacyKeyType {
        typeInputPrivacyKeyStatusTimestamp = 0x4f96cb18
    };

    InputPrivacyKey(InputPrivacyKeyType classType = typeInputPrivacyKeyStatusTimestamp, InboundPkt *in = 0);
    InputPrivacyKey(InboundPkt *in);
    virtual ~InputPrivacyKey();

    void setClassType(InputPrivacyKeyType classType);
    InputPrivacyKeyType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPrivacyKey &b);

private:
    InputPrivacyKeyType m_classType;
};

#endif // LQTG_INPUTPRIVACYKEY
