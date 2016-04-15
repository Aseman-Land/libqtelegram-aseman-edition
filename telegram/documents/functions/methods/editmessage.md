# Messages.editMessage

## Function:

TelegramCore::messagesEditMessage

## Schema:

```c++
messages.editMessage#ce91e4ca flags:# no_webpage:flags.1?true peer:InputPeer id:int message:flags.11?string reply_markup:flags.2?ReplyMarkup entities:flags.3?Vector<MessageEntity> = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|noWebpage|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|id|qint32||
|message|QString||
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
editMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_MESSAGE_CALLBACK

## Examples:

```c++
tg->editMessage(no_webpage, peer, id, message, reply_markup, entities, [=](TG_EDIT_MESSAGE_CALLBACK){
    ...
}, 30000);
```
