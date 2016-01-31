# Channels.editAdmin

## Function:

TelegramCore::channelsEditAdmin

## Schema:

`channels.editAdmin#eb7611d0 channel:InputChannel user_id:InputUser role:ChannelParticipantRole = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|role|[ChannelParticipantRole](../../types/channelparticipantrole.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `editAdminAnswer(qint64 msgId, const UpdatesType & result)`
* `editAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditAdminAnswer(qint64 msgId, const UpdatesType & result)`
* `onEditAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_ADMIN_CALLBACK

## Examples:

`tg->editAdmin(channel, user_id, role, [=](TG_EDIT_ADMIN_CALLBACK){
    ...
}, 30000);`
