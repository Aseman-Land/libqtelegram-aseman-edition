# Messages.search

## Function:

TelegramCore::messagesSearch

## Schema:

```c++
messages.search#d4569248 flags:# peer:InputPeer q:string filter:MessagesFilter min_date:int max_date:int offset:int max_id:int limit:int = messages.Messages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|q|QString||
|filter|[MessagesFilter](../../types/messagesfilter.md)||
|minDate|qint32||
|maxDate|qint32||
|offset|qint32||
|maxId|qint32||
|limit|qint32||
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
searchAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
searchError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSearchAnswer(qint64 msgId, const MessagesMessages & result)
```
```c++
onSearchError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEARCH_CALLBACK

## Examples:

```c++
tg->search(peer, q, filter, min_date, max_date, offset, max_id, limit, [=](TG_SEARCH_CALLBACK){
    ...
}, 30000);
```
