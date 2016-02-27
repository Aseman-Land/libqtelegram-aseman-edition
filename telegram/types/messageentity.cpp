// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messageentity.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessageEntity::MessageEntity(MessageEntityType classType, InboundPkt *in) :
    m_length(0),
    m_offset(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessageEntity::MessageEntity(InboundPkt *in) :
    m_length(0),
    m_offset(0),
    m_classType(typeMessageEntityUnknown)
{
    fetch(in);
}

MessageEntity::MessageEntity(const Null &null) :
    TelegramTypeObject(null),
    m_length(0),
    m_offset(0),
    m_classType(typeMessageEntityUnknown)
{
}

MessageEntity::~MessageEntity() {
}

void MessageEntity::setLanguage(const QString &language) {
    m_language = language;
}

QString MessageEntity::language() const {
    return m_language;
}

void MessageEntity::setLength(qint32 length) {
    m_length = length;
}

qint32 MessageEntity::length() const {
    return m_length;
}

void MessageEntity::setOffset(qint32 offset) {
    m_offset = offset;
}

qint32 MessageEntity::offset() const {
    return m_offset;
}

void MessageEntity::setUrl(const QString &url) {
    m_url = url;
}

QString MessageEntity::url() const {
    return m_url;
}

bool MessageEntity::operator ==(const MessageEntity &b) const {
    return m_classType == b.m_classType &&
           m_language == b.m_language &&
           m_length == b.m_length &&
           m_offset == b.m_offset &&
           m_url == b.m_url;
}

void MessageEntity::setClassType(MessageEntity::MessageEntityType classType) {
    m_classType = classType;
}

MessageEntity::MessageEntityType MessageEntity::classType() const {
    return m_classType;
}

bool MessageEntity::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessageEntityUnknown: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityMention: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityHashtag: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityBotCommand: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityUrl: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityEmail: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityBold: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityItalic: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityCode: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityPre: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_language = in->fetchQString();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityTextUrl: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_url = in->fetchQString();
        m_classType = static_cast<MessageEntityType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessageEntity::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessageEntityUnknown: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityMention: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityHashtag: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityBotCommand: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityUrl: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityEmail: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityBold: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityItalic: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityCode: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityPre: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        out->appendQString(m_language);
        return true;
    }
        break;
    
    case typeMessageEntityTextUrl: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        out->appendQString(m_url);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const MessageEntity &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessageEntity::typeMessageEntityUnknown:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityMention:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityHashtag:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityBotCommand:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityUrl:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityEmail:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityBold:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityItalic:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityCode:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityPre:
        stream << item.offset();
        stream << item.length();
        stream << item.language();
        break;
    case MessageEntity::typeMessageEntityTextUrl:
        stream << item.offset();
        stream << item.length();
        stream << item.url();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessageEntity &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessageEntity::MessageEntityType>(type));
    switch(type) {
    case MessageEntity::typeMessageEntityUnknown: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityMention: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityHashtag: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityBotCommand: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityUrl: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityEmail: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityBold: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityItalic: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityCode: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityPre: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
        QString m_language;
        stream >> m_language;
        item.setLanguage(m_language);
    }
        break;
    case MessageEntity::typeMessageEntityTextUrl: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
    }
        break;
    }
    return stream;
}
