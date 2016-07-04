# Channels.kickFromChannel

## Function:

TelegramCore::channelsKickFromChannel

## Schema:

```c++
channels.kickFromChannel#a672de14 channel:InputChannel user_id:InputUser kicked:Bool = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|kicked|bool||
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
kickFromChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
kickFromChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onKickFromChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onKickFromChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_KICK_FROM_CHANNEL_CALLBACK

## Examples:

```c++
tg->kickFromChannel(channel, user_id, kicked, [=](TG_KICK_FROM_CHANNEL_CALLBACK){
    ...
}, 30000);
```
