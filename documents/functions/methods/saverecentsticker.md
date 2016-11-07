# Messages.saveRecentSticker

## Function:

TelegramCore::messagesSaveRecentSticker

## Schema:

```c++
messages.saveRecentSticker#392718f8 flags:# attached:flags.0?true id:InputDocument unsave:Bool = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|attached|bool||
|id|[InputDocument](../../types/inputdocument.md)||
|unsave|bool||
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
saveRecentStickerAnswer(qint64 msgId, bool  result)
```
```c++
saveRecentStickerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveRecentStickerAnswer(qint64 msgId, bool  result)
```
```c++
onSaveRecentStickerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_RECENT_STICKER_CALLBACK

## Examples:

```c++
tg->saveRecentSticker(attached, id, unsave, [=](TG_SAVE_RECENT_STICKER_CALLBACK){
    ...
}, 30000);
```
