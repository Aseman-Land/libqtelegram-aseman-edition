# Messages.searchGifs

## Function:

TelegramCore::messagesSearchGifs

## Schema:

```c++
messages.searchGifs#bf9a776b q:string offset:int = messages.FoundGifs;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|q|QString||
|offset|qint32||
|callBack|Callback&lt;[MessagesFoundGifs](../../types/messagesfoundgifs.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesFoundGifs](../../types/messagesfoundgifs.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
searchGifsAnswer(qint64 msgId, const MessagesFoundGifs & result)
```
```c++
searchGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSearchGifsAnswer(qint64 msgId, const MessagesFoundGifs & result)
```
```c++
onSearchGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEARCH_GIFS_CALLBACK

## Examples:

```c++
tg->searchGifs(q, offset, [=](TG_SEARCH_GIFS_CALLBACK){
    ...
}, 30000);
```
