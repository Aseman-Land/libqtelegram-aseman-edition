# ContactsContacts

## Types

* [typeContactsContactsNotModified](#contactscontactstypecontactscontactsnotmodified)
* [typeContactsContacts](#contactscontactstypecontactscontacts)

## ContactsContacts::typeContactsContactsNotModified

#### Schema:

```c++
contacts.contactsNotModified#b74ba9d2 = contacts.Contacts;
```

#### Parameters:


## ContactsContacts::typeContactsContacts

#### Schema:

```c++
contacts.contacts#6f8b8cb2 contacts:Vector<Contact> users:Vector<User> = contacts.Contacts;
```

#### Parameters:

|Name|Type|
|----|----|
|contacts|QList&lt;[Contact](contact.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

