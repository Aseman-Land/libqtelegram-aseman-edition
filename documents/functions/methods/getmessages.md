# Messages.getMessages

## Function:

TelegramCore::messagesGetMessages

## Schema:

```c++
messages.getMessages#4222fa74 id:Vector<int> = messages.Messages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;qint32&gt;||
|callBack|Callback&lt;[MessagesMessages](../../types/messagesmessages.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesMessages](../../types/messagesmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getMessagesAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
getMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetMessagesAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
onGetMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_MESSAGES_CALLBACK

## Examples:

```c++
tg->getMessages(id, [=](TG_GET_MESSAGES_CALLBACK){
    ...
}, 30000);
```
