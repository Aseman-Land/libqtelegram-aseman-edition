# Messages.uninstallStickerSet

## Function:

TelegramCore::messagesUninstallStickerSet

## Schema:

`messages.uninstallStickerSet#f96e55de stickerset:InputStickerSet = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `uninstallStickerSetAnswer(qint64 msgId, bool  result)`
* `uninstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUninstallStickerSetAnswer(qint64 msgId, bool  result)`
* `onUninstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UNINSTALL_STICKER_SET_CALLBACK

## Examples:

`tg->uninstallStickerSet(stickerset, [=](TG_UNINSTALL_STICKER_SET_CALLBACK){
    ...
}, 30000);`
