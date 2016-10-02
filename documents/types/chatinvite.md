# ChatInvite

## Types

* [typeChatInviteAlready](#chatinvitetypechatinvitealready)
* [typeChatInvite](#chatinvitetypechatinvite)

## ChatInvite::typeChatInviteAlready

#### Schema:

```c++
chatInviteAlready#5a686d7c chat:Chat = ChatInvite;
```

#### Parameters:

|Name|Type|
|----|----|
|chat|[Chat](chat.md)|

## ChatInvite::typeChatInvite

#### Schema:

```c++
chatInvite#db74f558 flags:# channel:flags.0?true broadcast:flags.1?true public:flags.2?true megagroup:flags.3?true title:string photo:ChatPhoto participants_count:int participants:flags.4?Vector<User> = ChatInvite;
```

#### Parameters:

|Name|Type|
|----|----|
|channel|bool|
|broadcast|bool|
|publicValue|bool|
|megagroup|bool|
|title|QString|
|photo|[ChatPhoto](chatphoto.md)|
|participantsCount|qint32|
|participants|QList&lt;[User](user.md)&gt;|

