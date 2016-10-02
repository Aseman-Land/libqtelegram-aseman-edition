# Messages.readFeaturedStickers

## Function:

TelegramCore::messagesReadFeaturedStickers

## Schema:

```c++
messages.readFeaturedStickers#e21cbb = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
readFeaturedStickersAnswer(qint64 msgId, bool  result)
```
```c++
readFeaturedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReadFeaturedStickersAnswer(qint64 msgId, bool  result)
```
```c++
onReadFeaturedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_READ_FEATURED_STICKERS_CALLBACK

## Examples:

```c++
tg->readFeaturedStickers([=](TG_READ_FEATURED_STICKERS_CALLBACK){
    ...
}, 30000);
```
