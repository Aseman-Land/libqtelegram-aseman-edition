# Stickers.addStickerToSet

## Function:

TelegramCore::stickersAddStickerToSet

## Schema:

```c++
stickers.addStickerToSet#8653febe stickerset:InputStickerSet sticker:InputStickerSetItem = messages.StickerSet;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|sticker|[InputStickerSetItem](../../types/inputstickersetitem.md)||
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
addStickerToSetAnswer(qint64 msgId, const MessagesStickerSet & result)
```
```c++
addStickerToSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onAddStickerToSetAnswer(qint64 msgId, const MessagesStickerSet & result)
```
```c++
onAddStickerToSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_ADD_STICKER_TO_SET_CALLBACK

## Examples:

```c++
tg->addStickerToSet(stickerset, sticker, [=](TG_ADD_STICKER_TO_SET_CALLBACK){
    ...
}, 30000);
```
