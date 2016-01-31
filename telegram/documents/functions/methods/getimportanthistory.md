# Channels.getImportantHistory

## Function:

TelegramCore::channelsGetImportantHistory

## Schema:

`channels.getImportantHistory#ddb929cb channel:InputChannel offset_id:int add_offset:int limit:int max_id:int min_id:int = messages.Messages;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|offsetId|qint32||
|addOffset|qint32||
|limit|qint32||
|maxId|qint32||
|minId|qint32||
|callBack|Callback<MessagesMessages\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesMessages](../../types/messagesmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getImportantHistoryAnswer(qint64 msgId, const MessagesMessages & result)`
* `getImportantHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetImportantHistoryAnswer(qint64 msgId, const MessagesMessages & result)`
* `onGetImportantHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_IMPORTANT_HISTORY_CALLBACK

## Examples:

`tg->getImportantHistory(channel, offset_id, add_offset, limit, max_id, min_id, [=](TG_GET_IMPORTANT_HISTORY_CALLBACK){
    ...
}, 30000);`
