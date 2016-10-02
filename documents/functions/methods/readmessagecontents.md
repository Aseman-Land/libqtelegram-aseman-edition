# Messages.readMessageContents

## Function:

TelegramCore::messagesReadMessageContents

## Schema:

```c++
messages.readMessageContents#36a73f77 id:Vector<int> = messages.AffectedMessages;
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
readMessageContentsAnswer(qint64 msgId, const MessagesAffectedMessages & result)
```
```c++
readMessageContentsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReadMessageContentsAnswer(qint64 msgId, const MessagesAffectedMessages & result)
```
```c++
onReadMessageContentsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_READ_MESSAGE_CONTENTS_CALLBACK

## Examples:

```c++
tg->readMessageContents(id, [=](TG_READ_MESSAGE_CONTENTS_CALLBACK){
    ...
}, 30000);
```
