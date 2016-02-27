# Messages.sendMessage

## Function:

TelegramCore::messagesSendMessage

## Schema:

```c++
messages.sendMessage#fa88427a flags:# no_webpage:flags.1?true broadcast:flags.4?true silent:flags.5?true background:flags.6?true peer:InputPeer reply_to_msg_id:flags.0?int message:string random_id:long reply_markup:flags.2?ReplyMarkup entities:flags.3?Vector<MessageEntity> = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|noWebpage|bool||
|broadcast|bool||
|silent|bool||
|background|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|message|QString||
|randomId|qint64||
|replyMarkup|[ReplyMarkup](../../types/replymarkup.md)||
|entities|QList&lt;[MessageEntity](../../types/messageentity.md)&gt;||
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
sendMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
sendMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onSendMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_MESSAGE_CALLBACK

## Examples:

```c++
tg->sendMessage(no_webpage, broadcast, silent, background, peer, reply_to_msg_id, message, random_id, reply_markup, entities, [=](TG_SEND_MESSAGE_CALLBACK){
    ...
}, 30000);
```
