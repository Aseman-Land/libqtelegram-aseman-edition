# Messages.forwardMessages

## Function:

TelegramCore::messagesForwardMessages

## Schema:

`messages.forwardMessages#708e0195 flags:# broadcast:flags.4?true from_peer:InputPeer id:Vector<int> random_id:Vector<long> to_peer:InputPeer = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|broadcast|bool||
|fromPeer|[InputPeer](../../types/inputpeer.md)||
|id|QList<qint32>||
|randomId|QList<qint64>||
|toPeer|[InputPeer](../../types/inputpeer.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `forwardMessagesAnswer(qint64 msgId, const UpdatesType & result)`
* `forwardMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onForwardMessagesAnswer(qint64 msgId, const UpdatesType & result)`
* `onForwardMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_FORWARD_MESSAGES_CALLBACK

## Examples:

`tg->forwardMessages(broadcast, from_peer, id, random_id, to_peer, [=](TG_FORWARD_MESSAGES_CALLBACK){
    ...
}, 30000);`
