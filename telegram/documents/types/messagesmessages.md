# MessagesMessages

## Types

* [typeMessagesMessages](#messagesmessagestypemessagesmessages)
* [typeMessagesMessagesSlice](#messagesmessagestypemessagesmessagesslice)
* [typeMessagesChannelMessages](#messagesmessagestypemessageschannelmessages)

## MessagesMessages::typeMessagesMessages

#### Schema:

```c++
messages.messages#8c718e87 messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = messages.Messages;
```

#### Parameters:

|Name|Type|
|----|----|
|messages|QList&lt;[Message](message.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

## MessagesMessages::typeMessagesMessagesSlice

#### Schema:

```c++
messages.messagesSlice#b446ae3 count:int messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = messages.Messages;
```

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|messages|QList&lt;[Message](message.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

## MessagesMessages::typeMessagesChannelMessages

#### Schema:

```c++
messages.channelMessages#bc0f17bc flags:# pts:int count:int messages:Vector<Message> collapsed:flags.0?Vector<MessageGroup> chats:Vector<Chat> users:Vector<User> = messages.Messages;
```

#### Parameters:

|Name|Type|
|----|----|
|pts|qint32|
|count|qint32|
|messages|QList&lt;[Message](message.md)&gt;|
|collapsed|QList&lt;[MessageGroup](messagegroup.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

