// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputbotinlineresult.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

InputBotInlineResult::InputBotInlineResult(InputBotInlineResultType classType, InboundPkt *in) :
    m_duration(0),
    m_flags(0),
    m_h(0),
    m_w(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputBotInlineResult::InputBotInlineResult(InboundPkt *in) :
    m_duration(0),
    m_flags(0),
    m_h(0),
    m_w(0),
    m_classType(typeInputBotInlineResult)
{
    fetch(in);
}

InputBotInlineResult::InputBotInlineResult(const Null &null) :
    TelegramTypeObject(null),
    m_duration(0),
    m_flags(0),
    m_h(0),
    m_w(0),
    m_classType(typeInputBotInlineResult)
{
}

InputBotInlineResult::~InputBotInlineResult() {
}

void InputBotInlineResult::setContentType(const QString &contentType) {
    m_contentType = contentType;
}

QString InputBotInlineResult::contentType() const {
    return m_contentType;
}

void InputBotInlineResult::setContentUrl(const QString &contentUrl) {
    m_contentUrl = contentUrl;
}

QString InputBotInlineResult::contentUrl() const {
    return m_contentUrl;
}

void InputBotInlineResult::setDescription(const QString &description) {
    m_description = description;
}

QString InputBotInlineResult::description() const {
    return m_description;
}

void InputBotInlineResult::setDuration(qint32 duration) {
    m_duration = duration;
}

qint32 InputBotInlineResult::duration() const {
    return m_duration;
}

void InputBotInlineResult::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 InputBotInlineResult::flags() const {
    return m_flags;
}

void InputBotInlineResult::setH(qint32 h) {
    m_h = h;
}

qint32 InputBotInlineResult::h() const {
    return m_h;
}

void InputBotInlineResult::setId(const QString &id) {
    m_id = id;
}

QString InputBotInlineResult::id() const {
    return m_id;
}

void InputBotInlineResult::setSendMessage(const InputBotInlineMessage &sendMessage) {
    m_sendMessage = sendMessage;
}

InputBotInlineMessage InputBotInlineResult::sendMessage() const {
    return m_sendMessage;
}

void InputBotInlineResult::setThumbUrl(const QString &thumbUrl) {
    m_thumbUrl = thumbUrl;
}

QString InputBotInlineResult::thumbUrl() const {
    return m_thumbUrl;
}

void InputBotInlineResult::setTitle(const QString &title) {
    m_title = title;
}

QString InputBotInlineResult::title() const {
    return m_title;
}

void InputBotInlineResult::setType(const QString &type) {
    m_type = type;
}

QString InputBotInlineResult::type() const {
    return m_type;
}

void InputBotInlineResult::setUrl(const QString &url) {
    m_url = url;
}

QString InputBotInlineResult::url() const {
    return m_url;
}

void InputBotInlineResult::setW(qint32 w) {
    m_w = w;
}

qint32 InputBotInlineResult::w() const {
    return m_w;
}

bool InputBotInlineResult::operator ==(const InputBotInlineResult &b) const {
    return m_classType == b.m_classType &&
           m_contentType == b.m_contentType &&
           m_contentUrl == b.m_contentUrl &&
           m_description == b.m_description &&
           m_duration == b.m_duration &&
           m_flags == b.m_flags &&
           m_h == b.m_h &&
           m_id == b.m_id &&
           m_sendMessage == b.m_sendMessage &&
           m_thumbUrl == b.m_thumbUrl &&
           m_title == b.m_title &&
           m_type == b.m_type &&
           m_url == b.m_url &&
           m_w == b.m_w;
}

void InputBotInlineResult::setClassType(InputBotInlineResult::InputBotInlineResultType classType) {
    m_classType = classType;
}

InputBotInlineResult::InputBotInlineResultType InputBotInlineResult::classType() const {
    return m_classType;
}

bool InputBotInlineResult::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputBotInlineResult: {
        m_flags = in->fetchInt();
        m_id = in->fetchQString();
        m_type = in->fetchQString();
        if(m_flags & 1<<1) {
            m_title = in->fetchQString();
        }
        if(m_flags & 1<<2) {
            m_description = in->fetchQString();
        }
        if(m_flags & 1<<3) {
            m_url = in->fetchQString();
        }
        if(m_flags & 1<<4) {
            m_thumbUrl = in->fetchQString();
        }
        if(m_flags & 1<<5) {
            m_contentUrl = in->fetchQString();
        }
        if(m_flags & 1<<5) {
            m_contentType = in->fetchQString();
        }
        if(m_flags & 1<<6) {
            m_w = in->fetchInt();
        }
        if(m_flags & 1<<6) {
            m_h = in->fetchInt();
        }
        if(m_flags & 1<<7) {
            m_duration = in->fetchInt();
        }
        m_sendMessage.fetch(in);
        m_classType = static_cast<InputBotInlineResultType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputBotInlineResult::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputBotInlineResult: {
        out->appendInt(m_flags);
        out->appendQString(m_id);
        out->appendQString(m_type);
        out->appendQString(m_title);
        out->appendQString(m_description);
        out->appendQString(m_url);
        out->appendQString(m_thumbUrl);
        out->appendQString(m_contentUrl);
        out->appendQString(m_contentType);
        out->appendInt(m_w);
        out->appendInt(m_h);
        out->appendInt(m_duration);
        m_sendMessage.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}
