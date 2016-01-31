# UpdatesDifference

## Types

* typeUpdatesDifferenceEmpty
* typeUpdatesDifference
* typeUpdatesDifferenceSlice

## UpdatesDifference::typeUpdatesDifferenceEmpty

#### Schema:

`updates.differenceEmpty#5d75a138 date:int seq:int = updates.Difference;`

#### Parameters:

|Name|Type|
|----|----|
|date|qint32|
|seq|qint32|

## UpdatesDifference::typeUpdatesDifference

#### Schema:

`updates.difference#f49ca0 new_messages:Vector<Message> new_encrypted_messages:Vector<EncryptedMessage> other_updates:Vector<Update> chats:Vector<Chat> users:Vector<User> state:updates.State = updates.Difference;`

#### Parameters:

|Name|Type|
|----|----|
|newMessages|QList<Message>|
|newEncryptedMessages|QList<EncryptedMessage>|
|otherUpdates|QList<Update>|
|chats|QList<Chat>|
|users|QList<User>|
|state|[UpdatesState](updatesstate.md)|

## UpdatesDifference::typeUpdatesDifferenceSlice

#### Schema:

`updates.differenceSlice#a8fb1981 new_messages:Vector<Message> new_encrypted_messages:Vector<EncryptedMessage> other_updates:Vector<Update> chats:Vector<Chat> users:Vector<User> intermediate_state:updates.State = updates.Difference;`

#### Parameters:

|Name|Type|
|----|----|
|newMessages|QList<Message>|
|newEncryptedMessages|QList<EncryptedMessage>|
|otherUpdates|QList<Update>|
|chats|QList<Chat>|
|users|QList<User>|
|intermediateState|[UpdatesState](updatesstate.md)|

