#include "chatinvite.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ChatInvite::ChatInvite(ChatInviteType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatInvite::ChatInvite(InboundPkt *in) :
    m_classType(typeChatInviteAlready)
{
    fetch(in);
}

void ChatInvite::setChat(const Chat &chat) {
    m_chat = chat;
}

Chat ChatInvite::chat() const {
    return m_chat;
}

void ChatInvite::setTitle(const QString &title) {
    m_title = title;
}

QString ChatInvite::title() const {
    return m_title;
}

bool ChatInvite::operator ==(const ChatInvite &b) {
    return m_chat == b.m_chat &&
           m_title == b.m_title;
}

void ChatInvite::setClassType(ChatInvite::ChatInviteType classType) {
    m_classType = classType;
}

ChatInvite::ChatInviteType ChatInvite::classType() const {
    return m_classType;
}

bool ChatInvite::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeChatInviteAlready: {
        m_chat.fetch(in);
        return true;
    }
        break;
    
    case typeChatInvite: {
        m_title = in->fetchQString();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatInvite::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatInviteAlready: {
        m_chat.push(out);
        return true;
    }
        break;
    
    case typeChatInvite: {
        out->appendQString(m_title);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

