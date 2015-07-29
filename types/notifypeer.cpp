#include "notifypeer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

NotifyPeer::NotifyPeer(NotifyPeerType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

NotifyPeer::NotifyPeer(InboundPkt *in) :
    m_classType(typeNotifyPeer)
{
    fetch(in);
}

void NotifyPeer::setPeer(const Peer &peer) {
    m_peer = peer;
}

Peer NotifyPeer::peer() const {
    return m_peer;
}

bool NotifyPeer::operator ==(const NotifyPeer &b) {
    return m_peer == b.m_peer;
}

void NotifyPeer::setClassType(NotifyPeer::NotifyPeerType classType) {
    m_classType = classType;
}

NotifyPeer::NotifyPeerType NotifyPeer::classType() const {
    return m_classType;
}

bool NotifyPeer::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeNotifyPeer: {
        m_peer.fetch(in);
        return true;
    }
        break;
    
    case typeNotifyUsers: {
        return true;
    }
        break;
    
    case typeNotifyChats: {
        return true;
    }
        break;
    
    case typeNotifyAll: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool NotifyPeer::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeNotifyPeer: {
        m_peer.push(out);
        return true;
    }
        break;
    
    case typeNotifyUsers: {
        return true;
    }
        break;
    
    case typeNotifyChats: {
        return true;
    }
        break;
    
    case typeNotifyAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

