# Channels.getParticipant

## Function:

TelegramCore::channelsGetParticipant

## Schema:

`channels.getParticipant#546dd7a6 channel:InputChannel user_id:InputUser = channels.ChannelParticipant;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|callBack|Callback<ChannelsChannelParticipant\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ChannelsChannelParticipant](../../types/channelschannelparticipant.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getParticipantAnswer(qint64 msgId, const ChannelsChannelParticipant & result)`
* `getParticipantError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetParticipantAnswer(qint64 msgId, const ChannelsChannelParticipant & result)`
* `onGetParticipantError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_PARTICIPANT_CALLBACK

## Examples:

`tg->getParticipant(channel, user_id, [=](TG_GET_PARTICIPANT_CALLBACK){
    ...
}, 30000);`
