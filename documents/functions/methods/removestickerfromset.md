# Stickers.removeStickerFromSet

## Function:

TelegramCore::stickersRemoveStickerFromSet

## Schema:

```c++
stickers.removeStickerFromSet#4255934 sticker:InputDocument = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|sticker|[InputDocument](../../types/inputdocument.md)||
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
removeStickerFromSetAnswer(qint64 msgId, bool  result)
```
```c++
removeStickerFromSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onRemoveStickerFromSetAnswer(qint64 msgId, bool  result)
```
```c++
onRemoveStickerFromSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REMOVE_STICKER_FROM_SET_CALLBACK

## Examples:

```c++
tg->removeStickerFromSet(sticker, [=](TG_REMOVE_STICKER_FROM_SET_CALLBACK){
    ...
}, 30000);
```
