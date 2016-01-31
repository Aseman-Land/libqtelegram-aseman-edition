# Channels.leaveChannel

## Function:

TelegramCore::channelsLeaveChannel

## Schema:

`channels.leaveChannel#f836aa95 channel:InputChannel = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `leaveChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `leaveChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onLeaveChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `onLeaveChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_LEAVE_CHANNEL_CALLBACK

## Examples:

`tg->leaveChannel(channel, [=](TG_LEAVE_CHANNEL_CALLBACK){
    ...
}, 30000);`
