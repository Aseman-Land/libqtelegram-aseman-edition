# Channels.getMessageEditData

## Function:

TelegramCore::channelsGetMessageEditData

## Schema:

```c++
channels.getMessageEditData#27ea3a28 channel:InputChannel id:int = channels.MessageEditData;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|id|qint32||
|callBack|Callback&lt;[ChannelsMessageEditData](../../types/channelsmessageeditdata.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ChannelsMessageEditData](../../types/channelsmessageeditdata.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getMessageEditDataAnswer(qint64 msgId, const ChannelsMessageEditData & result)
```
```c++
getMessageEditDataError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetMessageEditDataAnswer(qint64 msgId, const ChannelsMessageEditData & result)
```
```c++
onGetMessageEditDataError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_MESSAGE_EDIT_DATA_CALLBACK

## Examples:

```c++
tg->getMessageEditData(channel, id, [=](TG_GET_MESSAGE_EDIT_DATA_CALLBACK){
    ...
}, 30000);
```
