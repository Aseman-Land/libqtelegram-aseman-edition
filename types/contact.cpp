#include "contact.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

Contact::Contact(ContactType classType, InboundPkt *in) :
    m_mutual(false),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Contact::Contact(InboundPkt *in) :
    m_mutual(false),
    m_userId(0),
    m_classType(typeContact)
{
    fetch(in);
}

void Contact::setMutual(bool mutual) {
    m_mutual = mutual;
}

bool Contact::mutual() const {
    return m_mutual;
}

void Contact::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 Contact::userId() const {
    return m_userId;
}

bool Contact::operator ==(const Contact &b) {
    return m_mutual == b.m_mutual &&
           m_userId == b.m_userId;
}

void Contact::setClassType(Contact::ContactType classType) {
    m_classType = classType;
}

Contact::ContactType Contact::classType() const {
    return m_classType;
}

bool Contact::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeContact: {
        m_userId = in->fetchInt();
        m_mutual = in->fetchBool();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Contact::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContact: {
        out->appendInt(m_userId);
        out->appendBool(m_mutual);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

