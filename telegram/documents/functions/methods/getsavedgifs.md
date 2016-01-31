# Messages.getSavedGifs

## Function:

TelegramCore::messagesGetSavedGifs

## Schema:

```c++
messages.getSavedGifs#83bf3d52 hash:int = messages.SavedGifs;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint32||
|callBack|Callback&lt;[MessagesSavedGifs](../../types/messagessavedgifs.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesSavedGifs](../../types/messagessavedgifs.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getSavedGifsAnswer(qint64 msgId, const MessagesSavedGifs & result)
```
```c++
getSavedGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetSavedGifsAnswer(qint64 msgId, const MessagesSavedGifs & result)
```
```c++
onGetSavedGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_SAVED_GIFS_CALLBACK

## Examples:

```c++
tg->getSavedGifs(hash, [=](TG_GET_SAVED_GIFS_CALLBACK){
    ...
}, 30000);
```
