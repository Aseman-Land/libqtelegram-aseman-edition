# Messages.getStickers

## Function:

TelegramCore::messagesGetStickers

## Schema:

`messages.getStickers#ae22e045 emoticon:string hash:string = messages.Stickers;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|emoticon|QString||
|hash|QString||
|callBack|Callback<MessagesStickers\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesStickers](../../types/messagesstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getStickersAnswer(qint64 msgId, const MessagesStickers & result)`
* `getStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetStickersAnswer(qint64 msgId, const MessagesStickers & result)`
* `onGetStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_STICKERS_CALLBACK

## Examples:

`tg->getStickers(emoticon, hash, [=](TG_GET_STICKERS_CALLBACK){
    ...
}, 30000);`
