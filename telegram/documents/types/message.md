# Message

## Types

* [typeMessageEmpty](#messagetypemessageempty)
* [typeMessage](#messagetypemessage)
* [typeMessageService](#messagetypemessageservice)

## Message::typeMessageEmpty

#### Schema:

```c++
messageEmpty#83e5de54 id:int = Message;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## Message::typeMessage

#### Schema:

```c++
message#c09be45f flags:# unread:flags.0?true out:flags.1?true mentioned:flags.4?true media_unread:flags.5?true silent:flags.13?true post:flags.14?true id:int from_id:flags.8?int to_id:Peer fwd_from:flags.2?MessageFwdHeader via_bot_id:flags.11?int reply_to_msg_id:flags.3?int date:int message:string media:flags.9?MessageMedia reply_markup:flags.6?ReplyMarkup entities:flags.7?Vector<MessageEntity> views:flags.10?int edit_date:flags.15?int = Message;
```

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|mentioned|bool|
|mediaUnread|bool|
|silent|bool|
|post|bool|
|id|qint32|
|fromId|qint32|
|toId|[Peer](peer.md)|
|fwdFrom|[MessageFwdHeader](messagefwdheader.md)|
|viaBotId|qint32|
|replyToMsgId|qint32|
|date|qint32|
|message|QString|
|media|[MessageMedia](messagemedia.md)|
|replyMarkup|[ReplyMarkup](replymarkup.md)|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|
|views|qint32|
|editDate|qint32|

## Message::typeMessageService

#### Schema:

```c++
messageService#9e19a1f6 flags:# unread:flags.0?true out:flags.1?true mentioned:flags.4?true media_unread:flags.5?true silent:flags.13?true post:flags.14?true id:int from_id:flags.8?int to_id:Peer reply_to_msg_id:flags.3?int date:int action:MessageAction = Message;
```

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|mentioned|bool|
|mediaUnread|bool|
|silent|bool|
|post|bool|
|id|qint32|
|fromId|qint32|
|toId|[Peer](peer.md)|
|replyToMsgId|qint32|
|date|qint32|
|action|[MessageAction](messageaction.md)|

