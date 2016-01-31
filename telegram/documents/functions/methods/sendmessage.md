# Messages.sendMessage

## Function:

TelegramCore::messagesSendMessage

## Schema:

`messages.sendMessage#fa88427a flags:# no_webpage:flags.1?true broadcast:flags.4?true peer:InputPeer reply_to_msg_id:flags.0?int message:string random_id:long reply_markup:flags.2?ReplyMarkup entities:flags.3?Vector<MessageEntity> = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|noWebpage|bool||
|broadcast|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|message|QString||
|randomId|qint64||
|replyMarkup|[ReplyMarkup](../../types/replymarkup.md)||
|entities|QList<MessageEntity>||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendMessageAnswer(qint64 msgId, const UpdatesType & result)`
* `sendMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendMessageAnswer(qint64 msgId, const UpdatesType & result)`
* `onSendMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_MESSAGE_CALLBACK

## Examples:

`tg->sendMessage(no_webpage, broadcast, peer, reply_to_msg_id, message, random_id, reply_markup, entities, [=](TG_SEND_MESSAGE_CALLBACK){
    ...
}, 30000);`
