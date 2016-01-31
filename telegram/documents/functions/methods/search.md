# Messages.search

## Function:

TelegramCore::messagesSearch

## Schema:

`messages.search#d4569248 flags:# important_only:flags.0?true peer:InputPeer q:string filter:MessagesFilter min_date:int max_date:int offset:int max_id:int limit:int = messages.Messages;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|importantOnly|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|q|QString||
|filter|[MessagesFilter](../../types/messagesfilter.md)||
|minDate|qint32||
|maxDate|qint32||
|offset|qint32||
|maxId|qint32||
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

* `searchAnswer(qint64 msgId, const MessagesMessages & result)`
* `searchError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSearchAnswer(qint64 msgId, const MessagesMessages & result)`
* `onSearchError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEARCH_CALLBACK

## Examples:

`tg->search(important_only, peer, q, filter, min_date, max_date, offset, max_id, limit, [=](TG_SEARCH_CALLBACK){
    ...
}, 30000);`
