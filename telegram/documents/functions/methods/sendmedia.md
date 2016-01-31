# Messages.sendMedia

## Function:

TelegramCore::messagesSendMedia

## Schema:

`messages.sendMedia#c8f16791 flags:# broadcast:flags.4?true peer:InputPeer reply_to_msg_id:flags.0?int media:InputMedia random_id:long reply_markup:flags.2?ReplyMarkup = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|broadcast|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|media|[InputMedia](../../types/inputmedia.md)||
|randomId|qint64||
|replyMarkup|[ReplyMarkup](../../types/replymarkup.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendMediaAnswer(qint64 msgId, const UpdatesType & result)`
* `sendMediaError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendMediaAnswer(qint64 msgId, const UpdatesType & result)`
* `onSendMediaError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_MEDIA_CALLBACK

## Examples:

`tg->sendMedia(broadcast, peer, reply_to_msg_id, media, random_id, reply_markup, [=](TG_SEND_MEDIA_CALLBACK){
    ...
}, 30000);`
