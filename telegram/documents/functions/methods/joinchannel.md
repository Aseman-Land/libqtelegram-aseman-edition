# Channels.joinChannel

## Function:

TelegramCore::channelsJoinChannel

## Schema:

`channels.joinChannel#24b524c5 channel:InputChannel = Updates;`
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

* `joinChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `joinChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onJoinChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `onJoinChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_JOIN_CHANNEL_CALLBACK

## Examples:

`tg->joinChannel(channel, [=](TG_JOIN_CHANNEL_CALLBACK){
    ...
}, 30000);`
