# Messages.sendInlineBotResult

## Function:

TelegramCore::messagesSendInlineBotResult

## Schema:

```c++
messages.sendInlineBotResult#b16e06fe flags:# silent:flags.5?true background:flags.6?true clear_draft:flags.7?true peer:InputPeer reply_to_msg_id:flags.0?int random_id:long query_id:long id:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|silent|bool||
|background|bool||
|clearDraft|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|randomId|qint64||
|queryId|qint64||
|id|QString||
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
sendInlineBotResultAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
sendInlineBotResultError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendInlineBotResultAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onSendInlineBotResultError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_INLINE_BOT_RESULT_CALLBACK

## Examples:

```c++
tg->sendInlineBotResult(silent, background, clear_draft, peer, reply_to_msg_id, random_id, query_id, id, [=](TG_SEND_INLINE_BOT_RESULT_CALLBACK){
    ...
}, 30000);
```
