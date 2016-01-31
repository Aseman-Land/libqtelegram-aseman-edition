# Messages.sendInlineBotResult

## Function:

TelegramCore::messagesSendInlineBotResult

## Schema:

`messages.sendInlineBotResult#b16e06fe flags:# broadcast:flags.4?true peer:InputPeer reply_to_msg_id:flags.0?int random_id:long query_id:long id:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|broadcast|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|randomId|qint64||
|queryId|qint64||
|id|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendInlineBotResultAnswer(qint64 msgId, const UpdatesType & result)`
* `sendInlineBotResultError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendInlineBotResultAnswer(qint64 msgId, const UpdatesType & result)`
* `onSendInlineBotResultError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_INLINE_BOT_RESULT_CALLBACK

## Examples:

`tg->sendInlineBotResult(broadcast, peer, reply_to_msg_id, random_id, query_id, id, [=](TG_SEND_INLINE_BOT_RESULT_CALLBACK){
    ...
}, 30000);`
