# Messages.forwardMessage

## Function:

TelegramCore::messagesForwardMessage

## Schema:

```c++
messages.forwardMessage#33963bf9 peer:InputPeer id:int random_id:long = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|qint32||
|randomId|qint64||
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
forwardMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
forwardMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onForwardMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onForwardMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_FORWARD_MESSAGE_CALLBACK

## Examples:

```c++
tg->forwardMessage(peer, id, random_id, [=](TG_FORWARD_MESSAGE_CALLBACK){
    ...
}, 30000);
```
