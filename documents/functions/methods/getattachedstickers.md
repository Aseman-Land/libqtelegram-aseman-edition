# Messages.getAttachedStickers

## Function:

TelegramCore::messagesGetAttachedStickers

## Schema:

```c++
messages.getAttachedStickers#cc5b67cc media:InputStickeredMedia = Vector<StickerSetCovered>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|media|[InputStickeredMedia](../../types/inputstickeredmedia.md)||
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
getAttachedStickersAnswer(qint64 msgId, const QList&lt;StickerSetCovered&gt; & result)
```
```c++
getAttachedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAttachedStickersAnswer(qint64 msgId, const QList&lt;StickerSetCovered&gt; & result)
```
```c++
onGetAttachedStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ATTACHED_STICKERS_CALLBACK

## Examples:

```c++
tg->getAttachedStickers(media, [=](TG_GET_ATTACHED_STICKERS_CALLBACK){
    ...
}, 30000);
```
