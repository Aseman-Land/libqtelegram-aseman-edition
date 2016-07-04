# Channels.getParticipant

## Function:

TelegramCore::channelsGetParticipant

## Schema:

```c++
channels.getParticipant#546dd7a6 channel:InputChannel user_id:InputUser = channels.ChannelParticipant;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|callBack|Callback&lt;[ChannelsChannelParticipant](../../types/channelschannelparticipant.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ChannelsChannelParticipant](../../types/channelschannelparticipant.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getParticipantAnswer(qint64 msgId, const ChannelsChannelParticipant & result)
```
```c++
getParticipantError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetParticipantAnswer(qint64 msgId, const ChannelsChannelParticipant & result)
```
```c++
onGetParticipantError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PARTICIPANT_CALLBACK

## Examples:

```c++
tg->getParticipant(channel, user_id, [=](TG_GET_PARTICIPANT_CALLBACK){
    ...
}, 30000);
```
