# Messages.editInlineBotMessage

## Function:

TelegramCore::messagesEditInlineBotMessage

## Schema:

```c++
messages.editInlineBotMessage#130c2c85 flags:# no_webpage:flags.1?true id:InputBotInlineMessageID message:flags.11?string reply_markup:flags.2?ReplyMarkup entities:flags.3?Vector<MessageEntity> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|noWebpage|bool||
|id|[InputBotInlineMessageID](../../types/inputbotinlinemessageid.md)||
|message|QString||
|replyMarkup|[ReplyMarkup](../../types/replymarkup.md)||
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
editInlineBotMessageAnswer(qint64 msgId, bool  result)
```
```c++
editInlineBotMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditInlineBotMessageAnswer(qint64 msgId, bool  result)
```
```c++
onEditInlineBotMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_INLINE_BOT_MESSAGE_CALLBACK

## Examples:

```c++
tg->editInlineBotMessage(no_webpage, id, message, reply_markup, entities, [=](TG_EDIT_INLINE_BOT_MESSAGE_CALLBACK){
    ...
}, 30000);
```
