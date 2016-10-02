# Channels.editAdmin

## Function:

TelegramCore::channelsEditAdmin

## Schema:

```c++
channels.editAdmin#eb7611d0 channel:InputChannel user_id:InputUser role:ChannelParticipantRole = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|role|[ChannelParticipantRole](../../types/channelparticipantrole.md)||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
editAdminAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditAdminAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_ADMIN_CALLBACK

## Examples:

```c++
tg->editAdmin(channel, user_id, role, [=](TG_EDIT_ADMIN_CALLBACK){
    ...
}, 30000);
```
