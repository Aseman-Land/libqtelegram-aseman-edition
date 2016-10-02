# Messages.sendMedia

## Function:

TelegramCore::messagesSendMedia

## Schema:

```c++
messages.sendMedia#c8f16791 flags:# silent:flags.5?true background:flags.6?true clear_draft:flags.7?true peer:InputPeer reply_to_msg_id:flags.0?int media:InputMedia random_id:long reply_markup:flags.2?ReplyMarkup = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|silent|bool||
|background|bool||
|clearDraft|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|media|[InputMedia](../../types/inputmedia.md)||
|randomId|qint64||
|replyMarkup|[ReplyMarkup](../../types/replymarkup.md)||
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
sendMediaAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
sendMediaError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendMediaAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onSendMediaError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_MEDIA_CALLBACK

## Examples:

```c++
tg->sendMedia(silent, background, clear_draft, peer, reply_to_msg_id, media, random_id, reply_markup, [=](TG_SEND_MEDIA_CALLBACK){
    ...
}, 30000);
```
