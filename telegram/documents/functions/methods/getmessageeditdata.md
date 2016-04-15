# Messages.getMessageEditData

## Function:

TelegramCore::messagesGetMessageEditData

## Schema:

```c++
messages.getMessageEditData#fda68d36 peer:InputPeer id:int = messages.MessageEditData;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|qint32||
|callBack|Callback&lt;[MessagesMessageEditData](../../types/messagesmessageeditdata.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesMessageEditData](../../types/messagesmessageeditdata.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getMessageEditDataAnswer(qint64 msgId, const MessagesMessageEditData & result)
```
```c++
getMessageEditDataError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetMessageEditDataAnswer(qint64 msgId, const MessagesMessageEditData & result)
```
```c++
onGetMessageEditDataError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_MESSAGE_EDIT_DATA_CALLBACK

## Examples:

```c++
tg->getMessageEditData(peer, id, [=](TG_GET_MESSAGE_EDIT_DATA_CALLBACK){
    ...
}, 30000);
```
