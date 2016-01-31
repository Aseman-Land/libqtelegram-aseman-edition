# Messages.getAllStickers

## Function:

TelegramCore::messagesGetAllStickers

## Schema:

`messages.getAllStickers#1c9618b1 hash:int = messages.AllStickers;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint32||
|callBack|Callback<MessagesAllStickers\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesAllStickers](../../types/messagesallstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getAllStickersAnswer(qint64 msgId, const MessagesAllStickers & result)`
* `getAllStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetAllStickersAnswer(qint64 msgId, const MessagesAllStickers & result)`
* `onGetAllStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_ALL_STICKERS_CALLBACK

## Examples:

`tg->getAllStickers(hash, [=](TG_GET_ALL_STICKERS_CALLBACK){
    ...
}, 30000);`
