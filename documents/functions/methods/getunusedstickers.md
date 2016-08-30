# Messages.getUnusedStickers

## Function:

TelegramCore::messagesGetUnusedStickers

## Schema:

```c++
messages.getUnusedStickers#4309d65b limit:int = Vector<StickerSetCovered>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|limit|qint32||
|callBack|Callback&lt;QList&lt;[StickerSetCovered](../../types/stickersetcovered.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[StickerSetCovered](../../types/stickersetcovered.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getUnusedStickersAnswer(qint64 msgId, const QList&lt;StickerSetCovered&gt; & result)
```
```c++
getUnusedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetUnusedStickersAnswer(qint64 msgId, const QList&lt;StickerSetCovered&gt; & result)
```
```c++
onGetUnusedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_UNUSED_STICKERS_CALLBACK

## Examples:

```c++
tg->getUnusedStickers(limit, [=](TG_GET_UNUSED_STICKERS_CALLBACK){
    ...
}, 30000);
```
