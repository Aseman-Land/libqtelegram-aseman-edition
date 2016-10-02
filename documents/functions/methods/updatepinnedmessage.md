# Channels.updatePinnedMessage

## Function:

TelegramCore::channelsUpdatePinnedMessage

## Schema:

```c++
channels.updatePinnedMessage#a72ded52 flags:# silent:flags.0?true channel:InputChannel id:int = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|silent|bool||
|channel|[InputChannel](../../types/inputchannel.md)||
|id|qint32||
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
updatePinnedMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
updatePinnedMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdatePinnedMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onUpdatePinnedMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_PINNED_MESSAGE_CALLBACK

## Examples:

```c++
tg->updatePinnedMessage(silent, channel, id, [=](TG_UPDATE_PINNED_MESSAGE_CALLBACK){
    ...
}, 30000);
```
