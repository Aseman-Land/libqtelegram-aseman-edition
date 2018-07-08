# Channels.editBanned

## Function:

TelegramCore::channelsEditBanned

## Schema:

```c++
channels.editBanned#bfd915cd channel:InputChannel user_id:InputUser banned_rights:ChannelBannedRights = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|bannedRights|[ChannelBannedRights](../../types/channelbannedrights.md)||
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
editBannedAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editBannedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditBannedAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditBannedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_BANNED_CALLBACK

## Examples:

```c++
tg->editBanned(channel, user_id, banned_rights, [=](TG_EDIT_BANNED_CALLBACK){
    ...
}, 30000);
```
