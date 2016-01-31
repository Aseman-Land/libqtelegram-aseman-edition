# Messages.readMessageContents

## Function:

TelegramCore::messagesReadMessageContents

## Schema:

`messages.readMessageContents#36a73f77 id:Vector<int> = messages.AffectedMessages;`
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

* `readMessageContentsAnswer(qint64 msgId, const MessagesAffectedMessages & result)`
* `readMessageContentsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReadMessageContentsAnswer(qint64 msgId, const MessagesAffectedMessages & result)`
* `onReadMessageContentsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_READ_MESSAGE_CONTENTS_CALLBACK

## Examples:

`tg->readMessageContents(id, [=](TG_READ_MESSAGE_CONTENTS_CALLBACK){
    ...
}, 30000);`
