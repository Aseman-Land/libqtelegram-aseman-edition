# Message

## Types

* typeMessageEmpty
* typeMessage
* typeMessageService

## Message::typeMessageEmpty

#### Schema:

`messageEmpty#83e5de54 id:int = Message;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## Message::typeMessage

#### Schema:

`message#c992e15c flags:# unread:flags.0?true out:flags.1?true mentioned:flags.4?true media_unread:flags.5?true id:int from_id:flags.8?int to_id:Peer fwd_from_id:flags.2?Peer fwd_date:flags.2?int via_bot_id:flags.11?int reply_to_msg_id:flags.3?int date:int message:string media:flags.9?MessageMedia reply_markup:flags.6?ReplyMarkup entities:flags.7?Vector<MessageEntity> views:flags.10?int = Message;`

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|mentioned|bool|
|mediaUnread|bool|
|id|qint32|
|fromId|qint32|
|toId|[Peer](peer.md)|
|fwdFromId|[Peer](peer.md)|
|fwdDate|qint32|
|viaBotId|qint32|
|replyToMsgId|qint32|
|date|qint32|
|message|QString|
|media|[MessageMedia](messagemedia.md)|
|replyMarkup|[ReplyMarkup](replymarkup.md)|
|entities|QList<MessageEntity>|
|views|qint32|

## Message::typeMessageService

#### Schema:

`messageService#c06b9607 flags:# unread:flags.0?true out:flags.1?true mentioned:flags.4?true media_unread:flags.5?true id:int from_id:flags.8?int to_id:Peer date:int action:MessageAction = Message;`

#### Parameters:

|Name|Type|
|----|----|
|unread|bool|
|out|bool|
|mentioned|bool|
|mediaUnread|bool|
|id|qint32|
|fromId|qint32|
|toId|[Peer](peer.md)|
|date|qint32|
|action|[MessageAction](messageaction.md)|

