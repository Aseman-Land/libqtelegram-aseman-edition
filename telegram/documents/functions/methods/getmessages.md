# Messages.getMessages

## Function:

TelegramCore::messagesGetMessages

## Schema:

`messages.getMessages#4222fa74 id:Vector<int> = messages.Messages;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<qint32>||
|callBack|Callback<MessagesMessages\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesMessages](../../types/messagesmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getMessagesAnswer(qint64 msgId, const MessagesMessages & result)`
* `getMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetMessagesAnswer(qint64 msgId, const MessagesMessages & result)`
* `onGetMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_MESSAGES_CALLBACK

## Examples:

`tg->getMessages(id, [=](TG_GET_MESSAGES_CALLBACK){
    ...
}, 30000);`
