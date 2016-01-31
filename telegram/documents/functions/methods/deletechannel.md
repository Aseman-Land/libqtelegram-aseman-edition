# Channels.deleteChannel

## Function:

TelegramCore::channelsDeleteChannel

## Schema:

```c++
channels.deleteChannel#c0111fe3 channel:InputChannel = Updates;
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
deleteChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
deleteChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onDeleteChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_CHANNEL_CALLBACK

## Examples:

```c++
tg->deleteChannel(channel, [=](TG_DELETE_CHANNEL_CALLBACK){
    ...
}, 30000);
```
