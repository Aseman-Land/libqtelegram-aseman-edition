#include "contactlink.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ContactLink::ContactLink(ContactLinkType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactLink::ContactLink(InboundPkt *in) :
    m_classType(typeContactLinkUnknown)
{
    fetch(in);
}

bool ContactLink::operator ==(const ContactLink &b) {
    Q_UNUSED(b);
    return true;
}

void ContactLink::setClassType(ContactLink::ContactLinkType classType) {
    m_classType = classType;
}

ContactLink::ContactLinkType ContactLink::classType() const {
    return m_classType;
}

bool ContactLink::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeContactLinkUnknown: {
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactLink::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactLinkUnknown: {
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

