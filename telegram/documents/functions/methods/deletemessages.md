# Messages.deleteMessages

## Function:

TelegramCore::messagesDeleteMessages

## Schema:

`messages.deleteMessages#a5f18925 id:Vector<int> = messages.AffectedMessages;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<qint32>||
|callBack|Callback<MessagesAffectedMessages\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesAffectedMessages](../../types/messagesaffectedmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteMessagesAnswer(qint64 msgId, const MessagesAffectedMessages & result)`
* `deleteMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteMessagesAnswer(qint64 msgId, const MessagesAffectedMessages & result)`
* `onDeleteMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_MESSAGES_CALLBACK

## Examples:

`tg->deleteMessages(id, [=](TG_DELETE_MESSAGES_CALLBACK){
    ...
}, 30000);`
