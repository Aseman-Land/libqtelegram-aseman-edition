# Messages.saveGif

## Function:

TelegramCore::messagesSaveGif

## Schema:

`messages.saveGif#327a30cb id:InputDocument unsave:Bool = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputDocument](../../types/inputdocument.md)||
|unsave|bool||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `saveGifAnswer(qint64 msgId, bool  result)`
* `saveGifError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSaveGifAnswer(qint64 msgId, bool  result)`
* `onSaveGifError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SAVE_GIF_CALLBACK

## Examples:

`tg->saveGif(id, unsave, [=](TG_SAVE_GIF_CALLBACK){
    ...
}, 30000);`
