# Channels.getParticipants

## Function:

TelegramCore::channelsGetParticipants

## Schema:

```c++
channels.getParticipants#24d98f92 channel:InputChannel filter:ChannelParticipantsFilter offset:int limit:int = channels.ChannelParticipants;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|filter|[ChannelParticipantsFilter](../../types/channelparticipantsfilter.md)||
|offset|qint32||
|limit|qint32||
|callBack|Callback&lt;[ChannelsChannelParticipants](../../types/channelschannelparticipants.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ChannelsChannelParticipants](../../types/channelschannelparticipants.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getParticipantsAnswer(qint64 msgId, const ChannelsChannelParticipants & result)
```
```c++
getParticipantsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetParticipantsAnswer(qint64 msgId, const ChannelsChannelParticipants & result)
```
```c++
onGetParticipantsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PARTICIPANTS_CALLBACK

## Examples:

```c++
tg->getParticipants(channel, filter, offset, limit, [=](TG_GET_PARTICIPANTS_CALLBACK){
    ...
}, 30000);
```
