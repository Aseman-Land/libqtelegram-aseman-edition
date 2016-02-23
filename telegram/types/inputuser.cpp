// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputuser.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

InputUser::InputUser(InputUserType classType, InboundPkt *in) :
    m_accessHash(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputUser::InputUser(InboundPkt *in) :
    m_accessHash(0),
    m_userId(0),
    m_classType(typeInputUserEmpty)
{
    fetch(in);
}

InputUser::~InputUser() {
}

void InputUser::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 InputUser::accessHash() const {
    return m_accessHash;
}

void InputUser::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 InputUser::userId() const {
    return m_userId;
}

bool InputUser::operator ==(const InputUser &b) {
    return m_accessHash == b.m_accessHash &&
           m_userId == b.m_userId;
}

void InputUser::setClassType(InputUser::InputUserType classType) {
    m_classType = classType;
}

InputUser::InputUserType InputUser::classType() const {
    return m_classType;
}

bool InputUser::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputUserEmpty: {
        m_classType = static_cast<InputUserType>(x);
        return true;
    }
        break;
    
    case typeInputUserSelf: {
        m_classType = static_cast<InputUserType>(x);
        return true;
    }
        break;
    
    case typeInputUserContact: {
        m_userId = in->fetchInt();
        m_classType = static_cast<InputUserType>(x);
        return true;
    }
        break;
    
    case typeInputUserForeign: {
        m_userId = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputUserType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputUser::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputUserEmpty: {
        return true;
    }
        break;
    
    case typeInputUserSelf: {
        return true;
    }
        break;
    
    case typeInputUserContact: {
        out->appendInt(m_userId);
        return true;
    }
        break;
    
    case typeInputUserForeign: {
        out->appendInt(m_userId);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

