# Messages.saveGif

## Function:

TelegramCore::messagesSaveGif

## Schema:

```c++
messages.saveGif#327a30cb id:InputDocument unsave:Bool = Bool;
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
saveGifAnswer(qint64 msgId, bool  result)
```
```c++
saveGifError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveGifAnswer(qint64 msgId, bool  result)
```
```c++
onSaveGifError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_GIF_CALLBACK

## Examples:

```c++
tg->saveGif(id, unsave, [=](TG_SAVE_GIF_CALLBACK){
    ...
}, 30000);
```
