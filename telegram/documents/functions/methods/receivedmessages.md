# Messages.receivedMessages

## Function:

TelegramCore::messagesReceivedMessages

## Schema:

`messages.receivedMessages#5a954c0 max_id:int = Vector<ReceivedNotifyMessage>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|maxId|qint32||
|callBack|Callback<QList<ReceivedNotifyMessage>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<ReceivedNotifyMessage>](../../types/qlist<receivednotifymessage>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `receivedMessagesAnswer(qint64 msgId, const QList<ReceivedNotifyMessage> & result)`
* `receivedMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReceivedMessagesAnswer(qint64 msgId, const QList<ReceivedNotifyMessage> & result)`
* `onReceivedMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RECEIVED_MESSAGES_CALLBACK

## Examples:

`tg->receivedMessages(max_id, [=](TG_RECEIVED_MESSAGES_CALLBACK){
    ...
}, 30000);`
