# Channels.inviteToChannel

## Function:

TelegramCore::channelsInviteToChannel

## Schema:

```c++
channels.inviteToChannel#199f3a6c channel:InputChannel users:Vector<InputUser> = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|users|QList&lt;[InputUser](../../types/inputuser.md)&gt;||
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
inviteToChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
inviteToChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onInviteToChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onInviteToChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_INVITE_TO_CHANNEL_CALLBACK

## Examples:

```c++
tg->inviteToChannel(channel, users, [=](TG_INVITE_TO_CHANNEL_CALLBACK){
    ...
}, 30000);
```
