# Channels.joinChannel

## Function:

TelegramCore::channelsJoinChannel

## Schema:

```c++
channels.joinChannel#24b524c5 channel:InputChannel = Updates;
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
joinChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
joinChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onJoinChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onJoinChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_JOIN_CHANNEL_CALLBACK

## Examples:

```c++
tg->joinChannel(channel, [=](TG_JOIN_CHANNEL_CALLBACK){
    ...
}, 30000);
```
