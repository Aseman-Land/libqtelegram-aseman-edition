# Channels.deleteChannel

## Function:

TelegramCore::channelsDeleteChannel

## Schema:

`channels.deleteChannel#c0111fe3 channel:InputChannel = Updates;`
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

* `deleteChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `deleteChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `onDeleteChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_CHANNEL_CALLBACK

## Examples:

`tg->deleteChannel(channel, [=](TG_DELETE_CHANNEL_CALLBACK){
    ...
}, 30000);`
