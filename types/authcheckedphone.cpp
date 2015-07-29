#include "authcheckedphone.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

AuthCheckedPhone::AuthCheckedPhone(AuthCheckedPhoneType classType, InboundPkt *in) :
    m_phoneRegistered(false),
    m_classType(classType)
{
    if(in) fetch(in);
}

AuthCheckedPhone::AuthCheckedPhone(InboundPkt *in) :
    m_phoneRegistered(false),
    m_classType(typeAuthCheckedPhone)
{
    fetch(in);
}

void AuthCheckedPhone::setPhoneRegistered(bool phoneRegistered) {
    m_phoneRegistered = phoneRegistered;
}

bool AuthCheckedPhone::phoneRegistered() const {
    return m_phoneRegistered;
}

bool AuthCheckedPhone::operator ==(const AuthCheckedPhone &b) {
    return m_phoneRegistered == b.m_phoneRegistered;
}

void AuthCheckedPhone::setClassType(AuthCheckedPhone::AuthCheckedPhoneType classType) {
    m_classType = classType;
}

AuthCheckedPhone::AuthCheckedPhoneType AuthCheckedPhone::classType() const {
    return m_classType;
}

bool AuthCheckedPhone::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeAuthCheckedPhone: {
        m_phoneRegistered = in->fetchBool();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AuthCheckedPhone::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthCheckedPhone: {
        out->appendBool(m_phoneRegistered);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

