# MessagesMessages

## Types

* typeMessagesMessages
* typeMessagesMessagesSlice
* typeMessagesChannelMessages

## MessagesMessages::typeMessagesMessages

#### Schema:

`messages.messages#8c718e87 messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = messages.Messages;`

#### Parameters:

|Name|Type|
|----|----|
|messages|QList<Message>|
|chats|QList<Chat>|
|users|QList<User>|

## MessagesMessages::typeMessagesMessagesSlice

#### Schema:

`messages.messagesSlice#b446ae3 count:int messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = messages.Messages;`

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|messages|QList<Message>|
|chats|QList<Chat>|
|users|QList<User>|

## MessagesMessages::typeMessagesChannelMessages

#### Schema:

`messages.channelMessages#bc0f17bc flags:# pts:int count:int messages:Vector<Message> collapsed:flags.0?Vector<MessageGroup> chats:Vector<Chat> users:Vector<User> = messages.Messages;`

#### Parameters:

|Name|Type|
|----|----|
|pts|qint32|
|count|qint32|
|messages|QList<Message>|
|collapsed|QList<MessageGroup>|
|chats|QList<Chat>|
|users|QList<User>|

