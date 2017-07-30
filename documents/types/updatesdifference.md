# UpdatesDifference

## Types

* [typeUpdatesDifferenceEmpty](#updatesdifferencetypeupdatesdifferenceempty)
* [typeUpdatesDifference](#updatesdifferencetypeupdatesdifference)
* [typeUpdatesDifferenceSlice](#updatesdifferencetypeupdatesdifferenceslice)
* [typeUpdatesDifferenceTooLong](#updatesdifferencetypeupdatesdifferencetoolong)

## UpdatesDifference::typeUpdatesDifferenceEmpty

#### Schema:

```c++
updates.differenceEmpty#5d75a138 date:int seq:int = updates.Difference;
```

#### Parameters:

|Name|Type|
|----|----|
|date|qint32|
|seq|qint32|

## UpdatesDifference::typeUpdatesDifference

#### Schema:

```c++
updates.difference#f49ca0 new_messages:Vector<Message> new_encrypted_messages:Vector<EncryptedMessage> other_updates:Vector<Update> chats:Vector<Chat> users:Vector<User> state:updates.State = updates.Difference;
```

#### Parameters:

|Name|Type|
|----|----|
|newMessages|QList&lt;[Message](message.md)&gt;|
|newEncryptedMessages|QList&lt;[EncryptedMessage](encryptedmessage.md)&gt;|
|otherUpdates|QList&lt;[Update](update.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|
|state|[UpdatesState](updatesstate.md)|

## UpdatesDifference::typeUpdatesDifferenceSlice

#### Schema:

```c++
updates.differenceSlice#a8fb1981 new_messages:Vector<Message> new_encrypted_messages:Vector<EncryptedMessage> other_updates:Vector<Update> chats:Vector<Chat> users:Vector<User> intermediate_state:updates.State = updates.Difference;
```

#### Parameters:

|Name|Type|
|----|----|
|newMessages|QList&lt;[Message](message.md)&gt;|
|newEncryptedMessages|QList&lt;[EncryptedMessage](encryptedmessage.md)&gt;|
|otherUpdates|QList&lt;[Update](update.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|
|intermediateState|[UpdatesState](updatesstate.md)|

## UpdatesDifference::typeUpdatesDifferenceTooLong

#### Schema:

```c++
updates.differenceTooLong#4afe8f6d pts:int = updates.Difference;
```

#### Parameters:

|Name|Type|
|----|----|
|pts|qint32|

