# Channels.getParticipants

## Function:

TelegramCore::channelsGetParticipants

## Schema:

`channels.getParticipants#24d98f92 channel:InputChannel filter:ChannelParticipantsFilter offset:int limit:int = channels.ChannelParticipants;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|filter|[ChannelParticipantsFilter](../../types/channelparticipantsfilter.md)||
|offset|qint32||
|limit|qint32||
|callBack|Callback<ChannelsChannelParticipants\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ChannelsChannelParticipants](../../types/channelschannelparticipants.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getParticipantsAnswer(qint64 msgId, const ChannelsChannelParticipants & result)`
* `getParticipantsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetParticipantsAnswer(qint64 msgId, const ChannelsChannelParticipants & result)`
* `onGetParticipantsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_PARTICIPANTS_CALLBACK

## Examples:

`tg->getParticipants(channel, filter, offset, limit, [=](TG_GET_PARTICIPANTS_CALLBACK){
    ...
}, 30000);`
