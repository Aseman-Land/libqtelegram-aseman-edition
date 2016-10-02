# Messages.installStickerSet

## Function:

TelegramCore::messagesInstallStickerSet

## Schema:

```c++
messages.installStickerSet#c78fe460 stickerset:InputStickerSet archived:Bool = messages.StickerSetInstallResult;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|archived|bool||
|callBack|Callback&lt;[MessagesStickerSetInstallResult](../../types/messagesstickersetinstallresult.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesStickerSetInstallResult](../../types/messagesstickersetinstallresult.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
installStickerSetAnswer(qint64 msgId, const MessagesStickerSetInstallResult & result)
```
```c++
installStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onInstallStickerSetAnswer(qint64 msgId, const MessagesStickerSetInstallResult & result)
```
```c++
onInstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_INSTALL_STICKER_SET_CALLBACK

## Examples:

```c++
tg->installStickerSet(stickerset, archived, [=](TG_INSTALL_STICKER_SET_CALLBACK){
    ...
}, 30000);
```
