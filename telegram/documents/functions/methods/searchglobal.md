# Messages.searchGlobal

## Function:

TelegramCore::messagesSearchGlobal

## Schema:

`messages.searchGlobal#9e3cacb0 q:string offset_date:int offset_peer:InputPeer offset_id:int limit:int = messages.Messages;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|q|QString||
|offsetDate|qint32||
|offsetPeer|[InputPeer](../../types/inputpeer.md)||
|offsetId|qint32||
|limit|qint32||
|callBack|Callback<MessagesMessages\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesMessages](../../types/messagesmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `searchGlobalAnswer(qint64 msgId, const MessagesMessages & result)`
* `searchGlobalError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSearchGlobalAnswer(qint64 msgId, const MessagesMessages & result)`
* `onSearchGlobalError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEARCH_GLOBAL_CALLBACK

## Examples:

`tg->searchGlobal(q, offset_date, offset_peer, offset_id, limit, [=](TG_SEARCH_GLOBAL_CALLBACK){
    ...
}, 30000);`
