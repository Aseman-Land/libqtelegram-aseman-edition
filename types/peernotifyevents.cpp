#include "peernotifyevents.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

PeerNotifyEvents::PeerNotifyEvents(PeerNotifyEventsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PeerNotifyEvents::PeerNotifyEvents(InboundPkt *in) :
    m_classType(typePeerNotifyEventsEmpty)
{
    fetch(in);
}

bool PeerNotifyEvents::operator ==(const PeerNotifyEvents &b) {
    Q_UNUSED(b);
    return true;
}

void PeerNotifyEvents::setClassType(PeerNotifyEvents::PeerNotifyEventsType classType) {
    m_classType = classType;
}

PeerNotifyEvents::PeerNotifyEventsType PeerNotifyEvents::classType() const {
    return m_classType;
}

bool PeerNotifyEvents::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typePeerNotifyEventsEmpty: {
        return true;
    }
        break;
    
    case typePeerNotifyEventsAll: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PeerNotifyEvents::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typePeerNotifyEventsEmpty: {
        return true;
    }
        break;
    
    case typePeerNotifyEventsAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

