# DraftMessage

## Types

* [typeDraftMessageEmpty](#draftmessagetypedraftmessageempty)
* [typeDraftMessage](#draftmessagetypedraftmessage)

## DraftMessage::typeDraftMessageEmpty

#### Schema:

```c++
draftMessageEmpty#ba4baec5 = DraftMessage;
```

#### Parameters:


## DraftMessage::typeDraftMessage

#### Schema:

```c++
draftMessage#fd8e711f flags:# no_webpage:flags.1?true reply_to_msg_id:flags.0?int message:string entities:flags.3?Vector<MessageEntity> date:int = DraftMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|noWebpage|bool|
|replyToMsgId|qint32|
|message|QString|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|
|date|qint32|

