// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatparticipants.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

ChatParticipants::ChatParticipants(ChatParticipantsType classType, InboundPkt *in) :
    m_adminId(0),
    m_chatId(0),
    m_version(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatParticipants::ChatParticipants(InboundPkt *in) :
    m_adminId(0),
    m_chatId(0),
    m_version(0),
    m_classType(typeChatParticipantsForbidden)
{
    fetch(in);
}

ChatParticipants::~ChatParticipants() {
}

void ChatParticipants::setAdminId(qint32 adminId) {
    m_adminId = adminId;
}

qint32 ChatParticipants::adminId() const {
    return m_adminId;
}

void ChatParticipants::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 ChatParticipants::chatId() const {
    return m_chatId;
}

void ChatParticipants::setParticipants(const QList<ChatParticipant> &participants) {
    m_participants = participants;
}

QList<ChatParticipant> ChatParticipants::participants() const {
    return m_participants;
}

void ChatParticipants::setVersion(qint32 version) {
    m_version = version;
}

qint32 ChatParticipants::version() const {
    return m_version;
}

bool ChatParticipants::operator ==(const ChatParticipants &b) {
    return m_adminId == b.m_adminId &&
           m_chatId == b.m_chatId &&
           m_participants == b.m_participants &&
           m_version == b.m_version;
}

void ChatParticipants::setClassType(ChatParticipants::ChatParticipantsType classType) {
    m_classType = classType;
}

ChatParticipants::ChatParticipantsType ChatParticipants::classType() const {
    return m_classType;
}

bool ChatParticipants::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatParticipantsForbidden: {
        m_chatId = in->fetchInt();
        m_classType = static_cast<ChatParticipantsType>(x);
        return true;
    }
        break;
    
    case typeChatParticipants: {
        m_chatId = in->fetchInt();
        m_adminId = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_participants_length = in->fetchInt();
        m_participants.clear();
        for (qint32 i = 0; i < m_participants_length; i++) {
            ChatParticipant type;
            type.fetch(in);
            m_participants.append(type);
        }
        m_version = in->fetchInt();
        m_classType = static_cast<ChatParticipantsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatParticipants::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatParticipantsForbidden: {
        out->appendInt(m_chatId);
        return true;
    }
        break;
    
    case typeChatParticipants: {
        out->appendInt(m_chatId);
        out->appendInt(m_adminId);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_participants.count());
        for (qint32 i = 0; i < m_participants.count(); i++) {
            m_participants[i].push(out);
        }
        out->appendInt(m_version);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

