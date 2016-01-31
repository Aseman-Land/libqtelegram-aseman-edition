# Messages.readHistory

## Function:

TelegramCore::messagesReadHistory

## Schema:

`messages.readHistory#e306d3a peer:InputPeer max_id:int = messages.AffectedMessages;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|maxId|qint32||
|callBack|Callback<MessagesAffectedMessages\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesAffectedMessages](../../types/messagesaffectedmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `readHistoryAnswer(qint64 msgId, const MessagesAffectedMessages & result)`
* `readHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReadHistoryAnswer(qint64 msgId, const MessagesAffectedMessages & result)`
* `onReadHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_READ_HISTORY_CALLBACK

## Examples:

`tg->readHistory(peer, max_id, [=](TG_READ_HISTORY_CALLBACK){
    ...
}, 30000);`
