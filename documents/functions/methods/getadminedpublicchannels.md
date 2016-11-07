# Channels.getAdminedPublicChannels

## Function:

TelegramCore::channelsGetAdminedPublicChannels

## Schema:

```c++
channels.getAdminedPublicChannels#8d8d82d7 = messages.Chats;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
getAdminedPublicChannelsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
getAdminedPublicChannelsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAdminedPublicChannelsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
onGetAdminedPublicChannelsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ADMINED_PUBLIC_CHANNELS_CALLBACK

## Examples:

```c++
tg->getAdminedPublicChannels([=](TG_GET_ADMINED_PUBLIC_CHANNELS_CALLBACK){
    ...
}, 30000);
```
