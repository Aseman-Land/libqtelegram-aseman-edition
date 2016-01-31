# Messages.forwardMessage

## Function:

TelegramCore::messagesForwardMessage

## Schema:

`messages.forwardMessage#33963bf9 peer:InputPeer id:int random_id:long = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|qint32||
|randomId|qint64||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `forwardMessageAnswer(qint64 msgId, const UpdatesType & result)`
* `forwardMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onForwardMessageAnswer(qint64 msgId, const UpdatesType & result)`
* `onForwardMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_FORWARD_MESSAGE_CALLBACK

## Examples:

`tg->forwardMessage(peer, id, random_id, [=](TG_FORWARD_MESSAGE_CALLBACK){
    ...
}, 30000);`
