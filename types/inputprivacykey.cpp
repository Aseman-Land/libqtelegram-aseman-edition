#include "inputprivacykey.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

InputPrivacyKey::InputPrivacyKey(InputPrivacyKeyType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPrivacyKey::InputPrivacyKey(InboundPkt *in) :
    m_classType(typeInputPrivacyKeyStatusTimestamp)
{
    fetch(in);
}

bool InputPrivacyKey::operator ==(const InputPrivacyKey &b) {
    Q_UNUSED(b);
    return true;
}

void InputPrivacyKey::setClassType(InputPrivacyKey::InputPrivacyKeyType classType) {
    m_classType = classType;
}

InputPrivacyKey::InputPrivacyKeyType InputPrivacyKey::classType() const {
    return m_classType;
}

bool InputPrivacyKey::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeInputPrivacyKeyStatusTimestamp: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPrivacyKey::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPrivacyKeyStatusTimestamp: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

