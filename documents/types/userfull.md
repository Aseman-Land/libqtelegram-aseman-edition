# UserFull

## Types

* [typeUserFull](#userfulltypeuserfull)

## UserFull::typeUserFull

#### Schema:

```c++
userFull#f220f3f flags:# blocked:flags.0?true phone_calls_available:flags.4?true phone_calls_private:flags.5?true user:User about:flags.1?string link:contacts.Link profile_photo:flags.2?Photo notify_settings:PeerNotifySettings bot_info:flags.3?BotInfo common_chats_count:int = UserFull;
```

#### Parameters:

|Name|Type|
|----|----|
|blocked|bool|
|phoneCallsAvailable|bool|
|phoneCallsPrivate|bool|
|user|[User](user.md)|
|about|QString|
|link|[ContactsLink](contactslink.md)|
|profilePhoto|[Photo](photo.md)|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|
|botInfo|[BotInfo](botinfo.md)|
|commonChatsCount|qint32|

