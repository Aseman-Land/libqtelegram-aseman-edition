# Messages.getHistory

## Function:

TelegramCore::messagesGetHistory

## Schema:

```c++
messages.getHistory#8a8ec2da peer:InputPeer offset_id:int add_offset:int limit:int max_id:int min_id:int = messages.Messages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|offsetId|qint32||
|addOffset|qint32||
|limit|qint32||
|maxId|qint32||
|minId|qint32||
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
getHistoryAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
getHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetHistoryAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
onGetHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_HISTORY_CALLBACK

## Examples:

```c++
tg->getHistory(peer, offset_id, add_offset, limit, max_id, min_id, [=](TG_GET_HISTORY_CALLBACK){
    ...
}, 30000);
```
