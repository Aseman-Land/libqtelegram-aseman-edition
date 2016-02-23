// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatlocated.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

ChatLocated::ChatLocated(ChatLocatedType classType, InboundPkt *in) :
    m_chatId(0),
    m_distance(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatLocated::ChatLocated(InboundPkt *in) :
    m_chatId(0),
    m_distance(0),
    m_classType(typeChatLocated)
{
    fetch(in);
}

ChatLocated::~ChatLocated() {
}

void ChatLocated::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 ChatLocated::chatId() const {
    return m_chatId;
}

void ChatLocated::setDistance(qint32 distance) {
    m_distance = distance;
}

qint32 ChatLocated::distance() const {
    return m_distance;
}

bool ChatLocated::operator ==(const ChatLocated &b) {
    return m_chatId == b.m_chatId &&
           m_distance == b.m_distance;
}

void ChatLocated::setClassType(ChatLocated::ChatLocatedType classType) {
    m_classType = classType;
}

ChatLocated::ChatLocatedType ChatLocated::classType() const {
    return m_classType;
}

bool ChatLocated::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatLocated: {
        m_chatId = in->fetchInt();
        m_distance = in->fetchInt();
        m_classType = static_cast<ChatLocatedType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatLocated::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatLocated: {
        out->appendInt(m_chatId);
        out->appendInt(m_distance);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

