# Messages.getFeaturedStickers

## Function:

TelegramCore::messagesGetFeaturedStickers

## Schema:

```c++
messages.getFeaturedStickers#2dacca4f hash:int = messages.FeaturedStickers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint32||
|callBack|Callback&lt;[MessagesFeaturedStickers](../../types/messagesfeaturedstickers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesFeaturedStickers](../../types/messagesfeaturedstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getFeaturedStickersAnswer(qint64 msgId, const MessagesFeaturedStickers & result)
```
```c++
getFeaturedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetFeaturedStickersAnswer(qint64 msgId, const MessagesFeaturedStickers & result)
```
```c++
onGetFeaturedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_FEATURED_STICKERS_CALLBACK

## Examples:

```c++
tg->getFeaturedStickers(hash, [=](TG_GET_FEATURED_STICKERS_CALLBACK){
    ...
}, 30000);
```
