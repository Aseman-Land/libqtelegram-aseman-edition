# ContactsTopPeers

## Types

* [typeContactsTopPeersNotModified](#contactstoppeerstypecontactstoppeersnotmodified)
* [typeContactsTopPeers](#contactstoppeerstypecontactstoppeers)

## ContactsTopPeers::typeContactsTopPeersNotModified

#### Schema:

```c++
contacts.topPeersNotModified#de266ef5 = contacts.TopPeers;
```

#### Parameters:


## ContactsTopPeers::typeContactsTopPeers

#### Schema:

```c++
contacts.topPeers#70b772a8 categories:Vector<TopPeerCategoryPeers> chats:Vector<Chat> users:Vector<User> = contacts.TopPeers;
```

#### Parameters:

|Name|Type|
|----|----|
|categories|QList&lt;[TopPeerCategoryPeers](toppeercategorypeers.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

