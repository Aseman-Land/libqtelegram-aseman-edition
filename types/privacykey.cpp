#include "privacykey.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

PrivacyKey::PrivacyKey(PrivacyKeyType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PrivacyKey::PrivacyKey(InboundPkt *in) :
    m_classType(typePrivacyKeyStatusTimestamp)
{
    fetch(in);
}

bool PrivacyKey::operator ==(const PrivacyKey &b) {
    Q_UNUSED(b);
    return true;
}

void PrivacyKey::setClassType(PrivacyKey::PrivacyKeyType classType) {
    m_classType = classType;
}

PrivacyKey::PrivacyKeyType PrivacyKey::classType() const {
    return m_classType;
}

bool PrivacyKey::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typePrivacyKeyStatusTimestamp: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PrivacyKey::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typePrivacyKeyStatusTimestamp: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

