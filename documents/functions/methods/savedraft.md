# Messages.saveDraft

## Function:

TelegramCore::messagesSaveDraft

## Schema:

```c++
messages.saveDraft#bc39e14b flags:# no_webpage:flags.1?true reply_to_msg_id:flags.0?int peer:InputPeer message:string entities:flags.3?Vector<MessageEntity> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|noWebpage|bool||
|replyToMsgId|qint32||
|peer|[InputPeer](../../types/inputpeer.md)||
|message|QString||
|entities|QList&lt;[MessageEntity](../../types/messageentity.md)&gt;||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
saveDraftAnswer(qint64 msgId, bool  result)
```
```c++
saveDraftError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveDraftAnswer(qint64 msgId, bool  result)
```
```c++
onSaveDraftError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_DRAFT_CALLBACK

## Examples:

```c++
tg->saveDraft(no_webpage, reply_to_msg_id, peer, message, entities, [=](TG_SAVE_DRAFT_CALLBACK){
    ...
}, 30000);
```
