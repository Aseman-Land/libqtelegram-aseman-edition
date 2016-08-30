# Channels.getFullChannel

## Function:

TelegramCore::channelsGetFullChannel

## Schema:

```c++
channels.getFullChannel#8736a09 channel:InputChannel = messages.ChatFull;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|callBack|Callback&lt;[MessagesChatFull](../../types/messageschatfull.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesChatFull](../../types/messageschatfull.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getFullChannelAnswer(qint64 msgId, const MessagesChatFull & result)
```
```c++
getFullChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetFullChannelAnswer(qint64 msgId, const MessagesChatFull & result)
```
```c++
onGetFullChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_FULL_CHANNEL_CALLBACK

## Examples:

```c++
tg->getFullChannel(channel, [=](TG_GET_FULL_CHANNEL_CALLBACK){
    ...
}, 30000);
```
