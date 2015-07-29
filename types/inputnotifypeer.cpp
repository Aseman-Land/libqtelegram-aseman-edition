#include "inputnotifypeer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

InputNotifyPeer::InputNotifyPeer(InputNotifyPeerType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputNotifyPeer::InputNotifyPeer(InboundPkt *in) :
    m_classType(typeInputNotifyPeer)
{
    fetch(in);
}

void InputNotifyPeer::setPeerInputGeoChat(const InputGeoChat &peerInputGeoChat) {
    m_peerInputGeoChat = peerInputGeoChat;
}

InputGeoChat InputNotifyPeer::peerInputGeoChat() const {
    return m_peerInputGeoChat;
}

void InputNotifyPeer::setPeerInput(const InputPeer &peerInput) {
    m_peerInput = peerInput;
}

InputPeer InputNotifyPeer::peerInput() const {
    return m_peerInput;
}

bool InputNotifyPeer::operator ==(const InputNotifyPeer &b) {
    return m_peerInputGeoChat == b.m_peerInputGeoChat &&
           m_peerInput == b.m_peerInput;
}

void InputNotifyPeer::setClassType(InputNotifyPeer::InputNotifyPeerType classType) {
    m_classType = classType;
}

InputNotifyPeer::InputNotifyPeerType InputNotifyPeer::classType() const {
    return m_classType;
}

bool InputNotifyPeer::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeInputNotifyPeer: {
        m_peerInput.fetch(in);
        return true;
    }
        break;
    
    case typeInputNotifyUsers: {
        return true;
    }
        break;
    
    case typeInputNotifyChats: {
        return true;
    }
        break;
    
    case typeInputNotifyAll: {
        return true;
    }
        break;
    
    case typeInputNotifyGeoChatPeer: {
        m_peerInputGeoChat.fetch(in);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputNotifyPeer::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputNotifyPeer: {
        m_peerInput.push(out);
        return true;
    }
        break;
    
    case typeInputNotifyUsers: {
        return true;
    }
        break;
    
    case typeInputNotifyChats: {
        return true;
    }
        break;
    
    case typeInputNotifyAll: {
        return true;
    }
        break;
    
    case typeInputNotifyGeoChatPeer: {
        m_peerInputGeoChat.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

