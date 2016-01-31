# Messages.getStickerSet

## Function:

TelegramCore::messagesGetStickerSet

## Schema:

`messages.getStickerSet#2619a90e stickerset:InputStickerSet = messages.StickerSet;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|callBack|Callback<MessagesStickerSet\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesStickerSet](../../types/messagesstickerset.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getStickerSetAnswer(qint64 msgId, const MessagesStickerSet & result)`
* `getStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetStickerSetAnswer(qint64 msgId, const MessagesStickerSet & result)`
* `onGetStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_STICKER_SET_CALLBACK

## Examples:

`tg->getStickerSet(stickerset, [=](TG_GET_STICKER_SET_CALLBACK){
    ...
}, 30000);`
