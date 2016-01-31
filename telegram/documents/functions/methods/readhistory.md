# Messages.readHistory

## Function:

TelegramCore::messagesReadHistory

## Schema:

```c++
messages.readHistory#e306d3a peer:InputPeer max_id:int = messages.AffectedMessages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|maxId|qint32||
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
readHistoryAnswer(qint64 msgId, const MessagesAffectedMessages & result)
```
```c++
readHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReadHistoryAnswer(qint64 msgId, const MessagesAffectedMessages & result)
```
```c++
onReadHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_READ_HISTORY_CALLBACK

## Examples:

```c++
tg->readHistory(peer, max_id, [=](TG_READ_HISTORY_CALLBACK){
    ...
}, 30000);
```
