# Messages.sendBroadcast

## Function:

TelegramCore::messagesSendBroadcast

## Schema:

```c++
messages.sendBroadcast#bf73f4da contacts:Vector<InputUser> random_id:Vector<long> message:string media:InputMedia = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|contacts|QList&lt;[InputUser](../../types/inputuser.md)&gt;||
|randomId|QList&lt;qint64&gt;||
|message|QString||
|media|[InputMedia](../../types/inputmedia.md)||
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
sendBroadcastAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
sendBroadcastError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendBroadcastAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onSendBroadcastError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_BROADCAST_CALLBACK

## Examples:

```c++
tg->sendBroadcast(contacts, random_id, message, media, [=](TG_SEND_BROADCAST_CALLBACK){
    ...
}, 30000);
```
