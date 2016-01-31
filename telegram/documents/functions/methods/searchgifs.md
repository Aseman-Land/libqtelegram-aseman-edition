# Messages.searchGifs

## Function:

TelegramCore::messagesSearchGifs

## Schema:

`messages.searchGifs#bf9a776b q:string offset:int = messages.FoundGifs;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|q|QString||
|offset|qint32||
|callBack|Callback<MessagesFoundGifs\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesFoundGifs](../../types/messagesfoundgifs.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `searchGifsAnswer(qint64 msgId, const MessagesFoundGifs & result)`
* `searchGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSearchGifsAnswer(qint64 msgId, const MessagesFoundGifs & result)`
* `onSearchGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEARCH_GIFS_CALLBACK

## Examples:

`tg->searchGifs(q, offset, [=](TG_SEARCH_GIFS_CALLBACK){
    ...
}, 30000);`
