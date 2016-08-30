# Messages.receivedMessages

## Function:

TelegramCore::messagesReceivedMessages

## Schema:

```c++
messages.receivedMessages#5a954c0 max_id:int = Vector<ReceivedNotifyMessage>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|maxId|qint32||
|callBack|Callback&lt;QList&lt;[ReceivedNotifyMessage](../../types/receivednotifymessage.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[ReceivedNotifyMessage](../../types/receivednotifymessage.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
receivedMessagesAnswer(qint64 msgId, const QList&lt;ReceivedNotifyMessage&gt; & result)
```
```c++
receivedMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReceivedMessagesAnswer(qint64 msgId, const QList&lt;ReceivedNotifyMessage&gt; & result)
```
```c++
onReceivedMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RECEIVED_MESSAGES_CALLBACK

## Examples:

```c++
tg->receivedMessages(max_id, [=](TG_RECEIVED_MESSAGES_CALLBACK){
    ...
}, 30000);
```
