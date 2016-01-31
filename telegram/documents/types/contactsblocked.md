# ContactsBlocked

## Types

* [typeContactsBlocked](#contactsblockedtypecontactsblocked)
* [typeContactsBlockedSlice](#contactsblockedtypecontactsblockedslice)

## ContactsBlocked::typeContactsBlocked

#### Schema:

```c++
contacts.blocked#1c138d15 blocked:Vector<ContactBlocked> users:Vector<User> = contacts.Blocked;
```

#### Parameters:

|Name|Type|
|----|----|
|blocked|QList&lt;[ContactBlocked](contactblocked.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

## ContactsBlocked::typeContactsBlockedSlice

#### Schema:

```c++
contacts.blockedSlice#900802a1 count:int blocked:Vector<ContactBlocked> users:Vector<User> = contacts.Blocked;
```

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|blocked|QList&lt;[ContactBlocked](contactblocked.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

