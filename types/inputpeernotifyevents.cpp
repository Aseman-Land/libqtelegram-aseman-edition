#include "inputpeernotifyevents.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

InputPeerNotifyEvents::InputPeerNotifyEvents(InputPeerNotifyEventsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPeerNotifyEvents::InputPeerNotifyEvents(InboundPkt *in) :
    m_classType(typeInputPeerNotifyEventsEmpty)
{
    fetch(in);
}

bool InputPeerNotifyEvents::operator ==(const InputPeerNotifyEvents &b) {
    Q_UNUSED(b);
    return true;
}

void InputPeerNotifyEvents::setClassType(InputPeerNotifyEvents::InputPeerNotifyEventsType classType) {
    m_classType = classType;
}

InputPeerNotifyEvents::InputPeerNotifyEventsType InputPeerNotifyEvents::classType() const {
    return m_classType;
}

bool InputPeerNotifyEvents::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeInputPeerNotifyEventsEmpty: {
        return true;
    }
        break;
    
    case typeInputPeerNotifyEventsAll: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPeerNotifyEvents::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPeerNotifyEventsEmpty: {
        return true;
    }
        break;
    
    case typeInputPeerNotifyEventsAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

