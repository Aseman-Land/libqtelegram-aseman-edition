#include "contactfound.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ContactFound::ContactFound(ContactFoundType classType, InboundPkt *in) :
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactFound::ContactFound(InboundPkt *in) :
    m_userId(0),
    m_classType(typeContactFound)
{
    fetch(in);
}

void ContactFound::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 ContactFound::userId() const {
    return m_userId;
}

bool ContactFound::operator ==(const ContactFound &b) {
    return m_userId == b.m_userId;
}

void ContactFound::setClassType(ContactFound::ContactFoundType classType) {
    m_classType = classType;
}

ContactFound::ContactFoundType ContactFound::classType() const {
    return m_classType;
}

bool ContactFound::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeContactFound: {
        m_userId = in->fetchInt();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactFound::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactFound: {
        out->appendInt(m_userId);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

