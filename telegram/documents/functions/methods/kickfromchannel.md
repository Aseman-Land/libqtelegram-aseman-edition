# Channels.kickFromChannel

## Function:

TelegramCore::channelsKickFromChannel

## Schema:

`channels.kickFromChannel#a672de14 channel:InputChannel user_id:InputUser kicked:Bool = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|kicked|bool||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `kickFromChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `kickFromChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onKickFromChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `onKickFromChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_KICK_FROM_CHANNEL_CALLBACK

## Examples:

`tg->kickFromChannel(channel, user_id, kicked, [=](TG_KICK_FROM_CHANNEL_CALLBACK){
    ...
}, 30000);`
