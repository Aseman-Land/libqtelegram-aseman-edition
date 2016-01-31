# Messages.installStickerSet

## Function:

TelegramCore::messagesInstallStickerSet

## Schema:

`messages.installStickerSet#7b30c3a6 stickerset:InputStickerSet disabled:Bool = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|disabled|bool||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `installStickerSetAnswer(qint64 msgId, bool  result)`
* `installStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onInstallStickerSetAnswer(qint64 msgId, bool  result)`
* `onInstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_INSTALL_STICKER_SET_CALLBACK

## Examples:

`tg->installStickerSet(stickerset, disabled, [=](TG_INSTALL_STICKER_SET_CALLBACK){
    ...
}, 30000);`
