# Messages.getSavedGifs

## Function:

TelegramCore::messagesGetSavedGifs

## Schema:

`messages.getSavedGifs#83bf3d52 hash:int = messages.SavedGifs;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint32||
|callBack|Callback<MessagesSavedGifs\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesSavedGifs](../../types/messagessavedgifs.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getSavedGifsAnswer(qint64 msgId, const MessagesSavedGifs & result)`
* `getSavedGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetSavedGifsAnswer(qint64 msgId, const MessagesSavedGifs & result)`
* `onGetSavedGifsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_SAVED_GIFS_CALLBACK

## Examples:

`tg->getSavedGifs(hash, [=](TG_GET_SAVED_GIFS_CALLBACK){
    ...
}, 30000);`
