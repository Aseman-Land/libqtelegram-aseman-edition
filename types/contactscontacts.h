#ifndef LQTG_CONTACTSCONTACTS
#define LQTG_CONTACTSCONTACTS

#include "telegramtypeobject.h"
#include <QList>
#include "contact.h"
#include "user.h"

class ContactsContacts : public TelegramTypeObject
{
public:
    enum ContactsContactsType {
        typeContactsContactsNotModified = 0xb74ba9d2,
        typeContactsContacts = 0x6f8b8cb2
    };

    ContactsContacts(ContactsContactsType classType = typeContactsContactsNotModified, InboundPkt *in = 0);
    ContactsContacts(InboundPkt *in);
    virtual ~ContactsContacts();

    void setContacts(const QList<Contact> &contacts);
    QList<Contact> contacts() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ContactsContactsType classType);
    ContactsContactsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactsContacts &b);

private:
    QList<Contact> m_contacts;
    QList<User> m_users;
    ContactsContactsType m_classType;
};

#endif // LQTG_CONTACTSCONTACTS
