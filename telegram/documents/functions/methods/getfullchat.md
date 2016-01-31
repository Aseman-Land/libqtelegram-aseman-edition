# Messages.getFullChat

## Function:

TelegramCore::messagesGetFullChat

## Schema:

`messages.getFullChat#3b831c66 chat_id:int = messages.ChatFull;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|callBack|Callback<MessagesChatFull\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesChatFull](../../types/messageschatfull.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getFullChatAnswer(qint64 msgId, const MessagesChatFull & result)`
* `getFullChatError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetFullChatAnswer(qint64 msgId, const MessagesChatFull & result)`
* `onGetFullChatError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_FULL_CHAT_CALLBACK

## Examples:

`tg->getFullChat(chat_id, [=](TG_GET_FULL_CHAT_CALLBACK){
    ...
}, 30000);`
