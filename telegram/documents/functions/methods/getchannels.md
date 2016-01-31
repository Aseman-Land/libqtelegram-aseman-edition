# Channels.getChannels

## Function:

TelegramCore::channelsGetChannels

## Schema:

`channels.getChannels#a7f6bbb id:Vector<InputChannel> = messages.Chats;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<InputChannel>||
|callBack|Callback<MessagesChats\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesChats](../../types/messageschats.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getChannelsAnswer(qint64 msgId, const MessagesChats & result)`
* `getChannelsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetChannelsAnswer(qint64 msgId, const MessagesChats & result)`
* `onGetChannelsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_CHANNELS_CALLBACK

## Examples:

`tg->getChannels(id, [=](TG_GET_CHANNELS_CALLBACK){
    ...
}, 30000);`
