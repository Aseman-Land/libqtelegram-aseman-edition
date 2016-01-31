# UpdatesType

## Types

* [typeUpdatesTooLong](#updatestypetypeupdatestoolong)
* [typeUpdateShortMessage](#updatestypetypeupdateshortmessage)
* [typeUpdateShortChatMessage](#updatestypetypeupdateshortchatmessage)
* [typeUpdateShort](#updatestypetypeupdateshort)
* [typeUpdatesCombined](#updatestypetypeupdatescombined)
* [typeUpdates](#updatestypetypeupdates)
* [typeUpdateShortSentMessage](#updatestypetypeupdateshortsentmessage)

## UpdatesType::typeUpdatesTooLong

#### Schema:

```c++
updatesTooLong#e317af7e = Updates;
```

#### Parameters:


## UpdatesType::typeUpdateShortMessage

#### Schema:

```c++
updateShortMessage#13e4deaa flags:# unread:flags.0?true out:flags.1?true mentioned:flags.4?true media_unread:flags.5?true id:int user_id:int message:string pts:int pts_count:int date:int fwd_from_id:flags.2?Peer fwd_date:flags.2?int via_bot_id:flags.11?int reply_to_msg_id:flags.3?int entities:flags.7?Vector<MessageEntity> = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|mentioned|bool|
|mediaUnread|bool|
|id|qint32|
|userId|qint32|
|message|QString|
|pts|qint32|
|ptsCount|qint32|
|date|qint32|
|fwdFromId|[Peer](peer.md)|
|fwdDate|qint32|
|viaBotId|qint32|
|replyToMsgId|qint32|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

## UpdatesType::typeUpdateShortChatMessage

#### Schema:

```c++
updateShortChatMessage#248afa62 flags:# unread:flags.0?true out:flags.1?true mentioned:flags.4?true media_unread:flags.5?true id:int from_id:int chat_id:int message:string pts:int pts_count:int date:int fwd_from_id:flags.2?Peer fwd_date:flags.2?int via_bot_id:flags.11?int reply_to_msg_id:flags.3?int entities:flags.7?Vector<MessageEntity> = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|mentioned|bool|
|mediaUnread|bool|
|id|qint32|
|fromId|qint32|
|chatId|qint32|
|message|QString|
|pts|qint32|
|ptsCount|qint32|
|date|qint32|
|fwdFromId|[Peer](peer.md)|
|fwdDate|qint32|
|viaBotId|qint32|
|replyToMsgId|qint32|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

## UpdatesType::typeUpdateShort

#### Schema:

```c++
updateShort#78d4dec1 update:Update date:int = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|update|[Update](update.md)|
|date|qint32|

## UpdatesType::typeUpdatesCombined

#### Schema:

```c++
updatesCombined#725b04c3 updates:Vector<Update> users:Vector<User> chats:Vector<Chat> date:int seq_start:int seq:int = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|updates|QList&lt;[Update](update.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|date|qint32|
|seqStart|qint32|
|seq|qint32|

## UpdatesType::typeUpdates

#### Schema:

```c++
updates#74ae4240 updates:Vector<Update> users:Vector<User> chats:Vector<Chat> date:int seq:int = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|updates|QList&lt;[Update](update.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|date|qint32|
|seq|qint32|

## UpdatesType::typeUpdateShortSentMessage

#### Schema:

```c++
updateShortSentMessage#11f1331c flags:# unread:flags.0?true out:flags.1?true id:int pts:int pts_count:int date:int media:flags.9?MessageMedia entities:flags.7?Vector<MessageEntity> = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|id|qint32|
|pts|qint32|
|ptsCount|qint32|
|date|qint32|
|media|[MessageMedia](messagemedia.md)|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

