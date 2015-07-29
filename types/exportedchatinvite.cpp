#include "exportedchatinvite.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ExportedChatInvite::ExportedChatInvite(ExportedChatInviteType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ExportedChatInvite::ExportedChatInvite(InboundPkt *in) :
    m_classType(typeChatInviteEmpty)
{
    fetch(in);
}

void ExportedChatInvite::setLink(const QString &link) {
    m_link = link;
}

QString ExportedChatInvite::link() const {
    return m_link;
}

bool ExportedChatInvite::operator ==(const ExportedChatInvite &b) {
    return m_link == b.m_link;
}

void ExportedChatInvite::setClassType(ExportedChatInvite::ExportedChatInviteType classType) {
    m_classType = classType;
}

ExportedChatInvite::ExportedChatInviteType ExportedChatInvite::classType() const {
    return m_classType;
}

bool ExportedChatInvite::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeChatInviteEmpty: {
        return true;
    }
        break;
    
    case typeChatInviteExported: {
        m_link = in->fetchQString();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ExportedChatInvite::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatInviteEmpty: {
        return true;
    }
        break;
    
    case typeChatInviteExported: {
        out->appendQString(m_link);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

