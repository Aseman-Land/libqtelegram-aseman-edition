# Channels.getImportantHistory

## Function:

TelegramCore::channelsGetImportantHistory

## Schema:

```c++
channels.getImportantHistory#ddb929cb channel:InputChannel offset_id:int add_offset:int limit:int max_id:int min_id:int = messages.Messages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
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
getImportantHistoryAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
getImportantHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetImportantHistoryAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
onGetImportantHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_IMPORTANT_HISTORY_CALLBACK

## Examples:

```c++
tg->getImportantHistory(channel, offset_id, add_offset, limit, max_id, min_id, [=](TG_GET_IMPORTANT_HISTORY_CALLBACK){
    ...
}, 30000);
```
