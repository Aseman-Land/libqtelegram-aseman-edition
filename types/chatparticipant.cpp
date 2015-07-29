#include "chatparticipant.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ChatParticipant::ChatParticipant(ChatParticipantType classType, InboundPkt *in) :
    m_date(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatParticipant::ChatParticipant(InboundPkt *in) :
    m_date(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(typeChatParticipant)
{
    fetch(in);
}

void ChatParticipant::setDate(qint32 date) {
    m_date = date;
}

qint32 ChatParticipant::date() const {
    return m_date;
}

void ChatParticipant::setInviterId(qint32 inviterId) {
    m_inviterId = inviterId;
}

qint32 ChatParticipant::inviterId() const {
    return m_inviterId;
}

void ChatParticipant::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 ChatParticipant::userId() const {
    return m_userId;
}

bool ChatParticipant::operator ==(const ChatParticipant &b) {
    return m_date == b.m_date &&
           m_inviterId == b.m_inviterId &&
           m_userId == b.m_userId;
}

void ChatParticipant::setClassType(ChatParticipant::ChatParticipantType classType) {
    m_classType = classType;
}

ChatParticipant::ChatParticipantType ChatParticipant::classType() const {
    return m_classType;
}

bool ChatParticipant::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeChatParticipant: {
        m_userId = in->fetchInt();
        m_inviterId = in->fetchInt();
        m_date = in->fetchInt();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatParticipant::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatParticipant: {
        out->appendInt(m_userId);
        out->appendInt(m_inviterId);
        out->appendInt(m_date);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

