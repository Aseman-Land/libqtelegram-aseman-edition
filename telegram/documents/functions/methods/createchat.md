# Messages.createChat

## Function:

TelegramCore::messagesCreateChat

## Schema:

```c++
messages.createChat#9cb126e users:Vector<InputUser> title:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|users|QList&lt;[InputUser](../../types/inputuser.md)&gt;||
|title|QString||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
createChatAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
createChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCreateChatAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onCreateChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CREATE_CHAT_CALLBACK

## Examples:

```c++
tg->createChat(users, title, [=](TG_CREATE_CHAT_CALLBACK){
    ...
}, 30000);
```
