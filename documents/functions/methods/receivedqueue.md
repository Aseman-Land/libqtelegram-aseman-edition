# Messages.receivedQueue

## Function:

TelegramCore::messagesReceivedQueue

## Schema:

```c++
messages.receivedQueue#55a5bb66 max_qts:int = Vector<long>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|maxQts|qint32||
|callBack|Callback&lt;QList&lt;qint64&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;qint64&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
receivedQueueAnswer(qint64 msgId, const QList&lt;qint64&gt; & result)
```
```c++
receivedQueueError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReceivedQueueAnswer(qint64 msgId, const QList&lt;qint64&gt; & result)
```
```c++
onReceivedQueueError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RECEIVED_QUEUE_CALLBACK

## Examples:

```c++
tg->receivedQueue(max_qts, [=](TG_RECEIVED_QUEUE_CALLBACK){
    ...
}, 30000);
```
