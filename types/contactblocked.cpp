#include "contactblocked.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ContactBlocked::ContactBlocked(ContactBlockedType classType, InboundPkt *in) :
    m_date(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactBlocked::ContactBlocked(InboundPkt *in) :
    m_date(0),
    m_userId(0),
    m_classType(typeContactBlocked)
{
    fetch(in);
}

void ContactBlocked::setDate(qint32 date) {
    m_date = date;
}

qint32 ContactBlocked::date() const {
    return m_date;
}

void ContactBlocked::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 ContactBlocked::userId() const {
    return m_userId;
}

bool ContactBlocked::operator ==(const ContactBlocked &b) {
    return m_date == b.m_date &&
           m_userId == b.m_userId;
}

void ContactBlocked::setClassType(ContactBlocked::ContactBlockedType classType) {
    m_classType = classType;
}

ContactBlocked::ContactBlockedType ContactBlocked::classType() const {
    return m_classType;
}

bool ContactBlocked::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeContactBlocked: {
        m_userId = in->fetchInt();
        m_date = in->fetchInt();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactBlocked::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactBlocked: {
        out->appendInt(m_userId);
        out->appendInt(m_date);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

