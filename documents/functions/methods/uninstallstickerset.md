# Messages.uninstallStickerSet

## Function:

TelegramCore::messagesUninstallStickerSet

## Schema:

```c++
messages.uninstallStickerSet#f96e55de stickerset:InputStickerSet = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
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
uninstallStickerSetAnswer(qint64 msgId, bool  result)
```
```c++
uninstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUninstallStickerSetAnswer(qint64 msgId, bool  result)
```
```c++
onUninstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UNINSTALL_STICKER_SET_CALLBACK

## Examples:

```c++
tg->uninstallStickerSet(stickerset, [=](TG_UNINSTALL_STICKER_SET_CALLBACK){
    ...
}, 30000);
```
