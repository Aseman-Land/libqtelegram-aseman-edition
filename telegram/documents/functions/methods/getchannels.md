# Channels.getChannels

## Function:

TelegramCore::channelsGetChannels

## Schema:

```c++
channels.getChannels#a7f6bbb id:Vector<InputChannel> = messages.Chats;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;[InputChannel](../../types/inputchannel.md)&gt;||
|callBack|Callback&lt;[MessagesChats](../../types/messageschats.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesChats](../../types/messageschats.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getChannelsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
getChannelsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetChannelsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
onGetChannelsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CHANNELS_CALLBACK

## Examples:

```c++
tg->getChannels(id, [=](TG_GET_CHANNELS_CALLBACK){
    ...
}, 30000);
```
