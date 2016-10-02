# Messages.saveRecentSticker

## Function:

TelegramCore::messagesSaveRecentSticker

## Schema:

```c++
messages.saveRecentSticker#348e39bf id:InputDocument unsave:Bool = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
tg->saveRecentSticker(id, unsave, [=](TG_SAVE_RECENT_STICKER_CALLBACK){
    ...
}, 30000);
```
