# Channels.inviteToChannel

## Function:

TelegramCore::channelsInviteToChannel

## Schema:

`channels.inviteToChannel#199f3a6c channel:InputChannel users:Vector<InputUser> = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|users|QList<InputUser>||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `inviteToChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `inviteToChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onInviteToChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `onInviteToChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_INVITE_TO_CHANNEL_CALLBACK

## Examples:

`tg->inviteToChannel(channel, users, [=](TG_INVITE_TO_CHANNEL_CALLBACK){
    ...
}, 30000);`
