# Messages.sendBroadcast

## Function:

TelegramCore::messagesSendBroadcast

## Schema:

`messages.sendBroadcast#bf73f4da contacts:Vector<InputUser> random_id:Vector<long> message:string media:InputMedia = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|contacts|QList<InputUser>||
|randomId|QList<qint64>||
|message|QString||
|media|[InputMedia](../../types/inputmedia.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendBroadcastAnswer(qint64 msgId, const UpdatesType & result)`
* `sendBroadcastError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendBroadcastAnswer(qint64 msgId, const UpdatesType & result)`
* `onSendBroadcastError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_BROADCAST_CALLBACK

## Examples:

`tg->sendBroadcast(contacts, random_id, message, media, [=](TG_SEND_BROADCAST_CALLBACK){
    ...
}, 30000);`
