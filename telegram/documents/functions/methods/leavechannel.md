# Channels.leaveChannel

## Function:

TelegramCore::channelsLeaveChannel

## Schema:

```c++
channels.leaveChannel#f836aa95 channel:InputChannel = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
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
leaveChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
leaveChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onLeaveChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onLeaveChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_LEAVE_CHANNEL_CALLBACK

## Examples:

```c++
tg->leaveChannel(channel, [=](TG_LEAVE_CHANNEL_CALLBACK){
    ...
}, 30000);
```
