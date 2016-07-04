# Messages.getStickerSet

## Function:

TelegramCore::messagesGetStickerSet

## Schema:

```c++
messages.getStickerSet#2619a90e stickerset:InputStickerSet = messages.StickerSet;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|callBack|Callback&lt;[MessagesStickerSet](../../types/messagesstickerset.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesStickerSet](../../types/messagesstickerset.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getStickerSetAnswer(qint64 msgId, const MessagesStickerSet & result)
```
```c++
getStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetStickerSetAnswer(qint64 msgId, const MessagesStickerSet & result)
```
```c++
onGetStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_STICKER_SET_CALLBACK

## Examples:

```c++
tg->getStickerSet(stickerset, [=](TG_GET_STICKER_SET_CALLBACK){
    ...
}, 30000);
```
