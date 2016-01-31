# Messages.receivedQueue

## Function:

TelegramCore::messagesReceivedQueue

## Schema:

`messages.receivedQueue#55a5bb66 max_qts:int = Vector<long>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|maxQts|qint32||
|callBack|Callback<QList<qint64>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<qint64>](../../types/qlist<qint64>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `receivedQueueAnswer(qint64 msgId, const QList<qint64> & result)`
* `receivedQueueError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReceivedQueueAnswer(qint64 msgId, const QList<qint64> & result)`
* `onReceivedQueueError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RECEIVED_QUEUE_CALLBACK

## Examples:

`tg->receivedQueue(max_qts, [=](TG_RECEIVED_QUEUE_CALLBACK){
    ...
}, 30000);`
