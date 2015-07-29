#include "authexportedauthorization.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

AuthExportedAuthorization::AuthExportedAuthorization(AuthExportedAuthorizationType classType, InboundPkt *in) :
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

AuthExportedAuthorization::AuthExportedAuthorization(InboundPkt *in) :
    m_id(0),
    m_classType(typeAuthExportedAuthorization)
{
    fetch(in);
}

void AuthExportedAuthorization::setBytes(const QByteArray &bytes) {
    m_bytes = bytes;
}

QByteArray AuthExportedAuthorization::bytes() const {
    return m_bytes;
}

void AuthExportedAuthorization::setId(qint32 id) {
    m_id = id;
}

qint32 AuthExportedAuthorization::id() const {
    return m_id;
}

bool AuthExportedAuthorization::operator ==(const AuthExportedAuthorization &b) {
    return m_bytes == b.m_bytes &&
           m_id == b.m_id;
}

void AuthExportedAuthorization::setClassType(AuthExportedAuthorization::AuthExportedAuthorizationType classType) {
    m_classType = classType;
}

AuthExportedAuthorization::AuthExportedAuthorizationType AuthExportedAuthorization::classType() const {
    return m_classType;
}

bool AuthExportedAuthorization::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeAuthExportedAuthorization: {
        m_id = in->fetchInt();
        m_bytes = in->fetchBytes();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AuthExportedAuthorization::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthExportedAuthorization: {
        out->appendInt(m_id);
        out->appendBytes(m_bytes);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

