# Messages.getArchivedStickers

## Function:

TelegramCore::messagesGetArchivedStickers

## Schema:

```c++
messages.getArchivedStickers#57f17692 flags:# masks:flags.0?true offset_id:long limit:int = messages.ArchivedStickers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|masks|bool||
|offsetId|qint64||
|limit|qint32||
|callBack|Callback&lt;[MessagesArchivedStickers](../../types/messagesarchivedstickers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesArchivedStickers](../../types/messagesarchivedstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getArchivedStickersAnswer(qint64 msgId, const MessagesArchivedStickers & result)
```
```c++
getArchivedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetArchivedStickersAnswer(qint64 msgId, const MessagesArchivedStickers & result)
```
```c++
onGetArchivedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ARCHIVED_STICKERS_CALLBACK

## Examples:

```c++
tg->getArchivedStickers(masks, offset_id, limit, [=](TG_GET_ARCHIVED_STICKERS_CALLBACK){
    ...
}, 30000);
```
