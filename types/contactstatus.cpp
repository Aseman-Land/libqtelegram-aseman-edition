#include "contactstatus.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ContactStatus::ContactStatus(ContactStatusType classType, InboundPkt *in) :
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactStatus::ContactStatus(InboundPkt *in) :
    m_userId(0),
    m_classType(typeContactStatus)
{
    fetch(in);
}

void ContactStatus::setStatus(const UserStatus &status) {
    m_status = status;
}

UserStatus ContactStatus::status() const {
    return m_status;
}

void ContactStatus::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 ContactStatus::userId() const {
    return m_userId;
}

bool ContactStatus::operator ==(const ContactStatus &b) {
    return m_status == b.m_status &&
           m_userId == b.m_userId;
}

void ContactStatus::setClassType(ContactStatus::ContactStatusType classType) {
    m_classType = classType;
}

ContactStatus::ContactStatusType ContactStatus::classType() const {
    return m_classType;
}

bool ContactStatus::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeContactStatus: {
        m_userId = in->fetchInt();
        m_status.fetch(in);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactStatus::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactStatus: {
        out->appendInt(m_userId);
        m_status.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

