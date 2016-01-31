# MessagesDialogs

## Types

* [typeMessagesDialogs](#messagesdialogstypemessagesdialogs)
* [typeMessagesDialogsSlice](#messagesdialogstypemessagesdialogsslice)

## MessagesDialogs::typeMessagesDialogs

#### Schema:

```c++
messages.dialogs#15ba6c40 dialogs:Vector<Dialog> messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = messages.Dialogs;
```

#### Parameters:

|Name|Type|
|----|----|
|dialogs|QList&lt;[Dialog](dialog.md)&gt;|
|messages|QList&lt;[Message](message.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

## MessagesDialogs::typeMessagesDialogsSlice

#### Schema:

```c++
messages.dialogsSlice#71e094f3 count:int dialogs:Vector<Dialog> messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = messages.Dialogs;
```

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|dialogs|QList&lt;[Dialog](dialog.md)&gt;|
|messages|QList&lt;[Message](message.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

