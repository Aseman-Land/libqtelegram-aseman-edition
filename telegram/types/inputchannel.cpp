// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputchannel.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputChannel::InputChannel(InputChannelType classType, InboundPkt *in) :
    m_accessHash(0),
    m_channelId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputChannel::InputChannel(InboundPkt *in) :
    m_accessHash(0),
    m_channelId(0),
    m_classType(typeInputChannelEmpty)
{
    fetch(in);
}

InputChannel::InputChannel(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_channelId(0),
    m_classType(typeInputChannelEmpty)
{
}

InputChannel::~InputChannel() {
}

void InputChannel::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 InputChannel::accessHash() const {
    return m_accessHash;
}

void InputChannel::setChannelId(qint32 channelId) {
    m_channelId = channelId;
}

qint32 InputChannel::channelId() const {
    return m_channelId;
}

bool InputChannel::operator ==(const InputChannel &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_channelId == b.m_channelId;
}

void InputChannel::setClassType(InputChannel::InputChannelType classType) {
    m_classType = classType;
}

InputChannel::InputChannelType InputChannel::classType() const {
    return m_classType;
}

bool InputChannel::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputChannelEmpty: {
        m_classType = static_cast<InputChannelType>(x);
        return true;
    }
        break;
    
    case typeInputChannel: {
        m_channelId = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputChannelType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputChannel::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputChannelEmpty: {
        return true;
    }
        break;
    
    case typeInputChannel: {
        out->appendInt(m_channelId);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QDataStream &operator<<(QDataStream &stream, const InputChannel &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputChannel::typeInputChannelEmpty:
        
        break;
    case InputChannel::typeInputChannel:
        stream << item.channelId();
        stream << item.accessHash();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputChannel &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputChannel::InputChannelType>(type));
    switch(type) {
    case InputChannel::typeInputChannelEmpty: {
        
    }
        break;
    case InputChannel::typeInputChannel: {
        qint32 m_channel_id;
        stream >> m_channel_id;
        item.setChannelId(m_channel_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}
