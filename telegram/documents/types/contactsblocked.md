# ContactsBlocked

## Types

* [typeContactsBlocked](#contactsblockedtypecontactsblocked)
* [typeContactsBlockedSlice](#contactsblockedtypecontactsblockedslice)

## ContactsBlocked::typeContactsBlocked

#### Schema:

`contacts.blocked#1c138d15 blocked:Vector<ContactBlocked> users:Vector<User> = contacts.Blocked;`

#### Parameters:

|Name|Type|
|----|----|
|blocked|QList<ContactBlocked>|
|users|QList<User>|

## ContactsBlocked::typeContactsBlockedSlice

#### Schema:

`contacts.blockedSlice#900802a1 count:int blocked:Vector<ContactBlocked> users:Vector<User> = contacts.Blocked;`

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|blocked|QList<ContactBlocked>|
|users|QList<User>|

