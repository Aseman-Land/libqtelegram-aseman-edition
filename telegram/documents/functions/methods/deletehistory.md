# Messages.deleteHistory

## Function:

TelegramCore::messagesDeleteHistory

## Schema:

`messages.deleteHistory#b7c13bd9 peer:InputPeer max_id:int = messages.AffectedHistory;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|maxId|qint32||
|callBack|Callback<MessagesAffectedHistory\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesAffectedHistory](../../types/messagesaffectedhistory.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)`
* `deleteHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)`
* `onDeleteHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_HISTORY_CALLBACK

## Examples:

`tg->deleteHistory(peer, max_id, [=](TG_DELETE_HISTORY_CALLBACK){
    ...
}, 30000);`
