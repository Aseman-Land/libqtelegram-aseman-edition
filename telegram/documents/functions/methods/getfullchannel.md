# Channels.getFullChannel

## Function:

TelegramCore::channelsGetFullChannel

## Schema:

`channels.getFullChannel#8736a09 channel:InputChannel = messages.ChatFull;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|callBack|Callback<MessagesChatFull\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesChatFull](../../types/messageschatfull.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getFullChannelAnswer(qint64 msgId, const MessagesChatFull & result)`
* `getFullChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetFullChannelAnswer(qint64 msgId, const MessagesChatFull & result)`
* `onGetFullChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_FULL_CHANNEL_CALLBACK

## Examples:

`tg->getFullChannel(channel, [=](TG_GET_FULL_CHANNEL_CALLBACK){
    ...
}, 30000);`
