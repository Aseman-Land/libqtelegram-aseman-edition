#include "messagessentencryptedmessage.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

MessagesSentEncryptedMessage::MessagesSentEncryptedMessage(MessagesSentEncryptedMessageType classType, InboundPkt *in) :
    m_date(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesSentEncryptedMessage::MessagesSentEncryptedMessage(InboundPkt *in) :
    m_date(0),
    m_classType(typeMessagesSentEncryptedMessage)
{
    fetch(in);
}

void MessagesSentEncryptedMessage::setDate(qint32 date) {
    m_date = date;
}

qint32 MessagesSentEncryptedMessage::date() const {
    return m_date;
}

void MessagesSentEncryptedMessage::setFile(const EncryptedFile &file) {
    m_file = file;
}

EncryptedFile MessagesSentEncryptedMessage::file() const {
    return m_file;
}

bool MessagesSentEncryptedMessage::operator ==(const MessagesSentEncryptedMessage &b) {
    return m_date == b.m_date &&
           m_file == b.m_file;
}

void MessagesSentEncryptedMessage::setClassType(MessagesSentEncryptedMessage::MessagesSentEncryptedMessageType classType) {
    m_classType = classType;
}

MessagesSentEncryptedMessage::MessagesSentEncryptedMessageType MessagesSentEncryptedMessage::classType() const {
    return m_classType;
}

bool MessagesSentEncryptedMessage::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeMessagesSentEncryptedMessage: {
        m_date = in->fetchInt();
        return true;
    }
        break;
    
    case typeMessagesSentEncryptedFile: {
        m_date = in->fetchInt();
        m_file.fetch(in);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesSentEncryptedMessage::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesSentEncryptedMessage: {
        out->appendInt(m_date);
        return true;
    }
        break;
    
    case typeMessagesSentEncryptedFile: {
        out->appendInt(m_date);
        m_file.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

