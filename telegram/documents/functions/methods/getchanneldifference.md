# Updates.getChannelDifference

## Function:

TelegramCore::updatesGetChannelDifference

## Schema:

`updates.getChannelDifference#bb32d7c0 channel:InputChannel filter:ChannelMessagesFilter pts:int limit:int = updates.ChannelDifference;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|filter|[ChannelMessagesFilter](../../types/channelmessagesfilter.md)||
|pts|qint32||
|limit|qint32||
|callBack|Callback<UpdatesChannelDifference\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesChannelDifference](../../types/updateschanneldifference.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getChannelDifferenceAnswer(qint64 msgId, const UpdatesChannelDifference & result)`
* `getChannelDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetChannelDifferenceAnswer(qint64 msgId, const UpdatesChannelDifference & result)`
* `onGetChannelDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_CHANNEL_DIFFERENCE_CALLBACK

## Examples:

`tg->getChannelDifference(channel, filter, pts, limit, [=](TG_GET_CHANNEL_DIFFERENCE_CALLBACK){
    ...
}, 30000);`
