#include "contactscontacts.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

ContactsContacts::ContactsContacts(ContactsContactsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactsContacts::ContactsContacts(InboundPkt *in) :
    m_classType(typeContactsContactsNotModified)
{
    fetch(in);
}

void ContactsContacts::setContacts(const QList<Contact> &contacts) {
    m_contacts = contacts;
}

QList<Contact> ContactsContacts::contacts() const {
    return m_contacts;
}

void ContactsContacts::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> ContactsContacts::users() const {
    return m_users;
}

bool ContactsContacts::operator ==(const ContactsContacts &b) {
    return m_contacts == b.m_contacts &&
           m_users == b.m_users;
}

void ContactsContacts::setClassType(ContactsContacts::ContactsContactsType classType) {
    m_classType = classType;
}

ContactsContacts::ContactsContactsType ContactsContacts::classType() const {
    return m_classType;
}

bool ContactsContacts::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeContactsContactsNotModified: {
        return true;
    }
        break;
    
    case typeContactsContacts: {
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_contacts_length = in->fetchInt();
        m_contacts.clear();
        for (qint32 i = 0; i < m_contacts_length; i++) {
            Contact type;
            type.fetch(in);
            m_contacts.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactsContacts::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactsContactsNotModified: {
        return true;
    }
        break;
    
    case typeContactsContacts: {
        out->appendInt(TL_Vector);
        out->appendInt(m_contacts.count());
        for (qint32 i = 0; i < m_contacts.count(); i++) {
            m_contacts[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

