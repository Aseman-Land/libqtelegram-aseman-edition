# Messages.deleteMessages

## Function:

TelegramCore::messagesDeleteMessages

## Schema:

```c++
messages.deleteMessages#a5f18925 id:Vector<int> = messages.AffectedMessages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;qint32&gt;||
|callBack|Callback&lt;[MessagesAffectedMessages](../../types/messagesaffectedmessages.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesAffectedMessages](../../types/messagesaffectedmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
deleteMessagesAnswer(qint64 msgId, const MessagesAffectedMessages & result)
```
```c++
deleteMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteMessagesAnswer(qint64 msgId, const MessagesAffectedMessages & result)
```
```c++
onDeleteMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_MESSAGES_CALLBACK

## Examples:

```c++
tg->deleteMessages(id, [=](TG_DELETE_MESSAGES_CALLBACK){
    ...
}, 30000);
```
