#include "authpasswordrecovery.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

AuthPasswordRecovery::AuthPasswordRecovery(AuthPasswordRecoveryType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

AuthPasswordRecovery::AuthPasswordRecovery(InboundPkt *in) :
    m_classType(typeAuthPasswordRecovery)
{
    fetch(in);
}

void AuthPasswordRecovery::setEmailPattern(const QString &emailPattern) {
    m_emailPattern = emailPattern;
}

QString AuthPasswordRecovery::emailPattern() const {
    return m_emailPattern;
}

bool AuthPasswordRecovery::operator ==(const AuthPasswordRecovery &b) {
    return m_emailPattern == b.m_emailPattern;
}

void AuthPasswordRecovery::setClassType(AuthPasswordRecovery::AuthPasswordRecoveryType classType) {
    m_classType = classType;
}

AuthPasswordRecovery::AuthPasswordRecoveryType AuthPasswordRecovery::classType() const {
    return m_classType;
}

bool AuthPasswordRecovery::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeAuthPasswordRecovery: {
        m_emailPattern = in->fetchQString();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AuthPasswordRecovery::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthPasswordRecovery: {
        out->appendQString(m_emailPattern);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

