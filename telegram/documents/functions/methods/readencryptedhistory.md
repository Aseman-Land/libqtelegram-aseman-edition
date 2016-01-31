# Messages.readEncryptedHistory

## Function:

TelegramCore::messagesReadEncryptedHistory

## Schema:

```c++
messages.readEncryptedHistory#7f4b690a peer:InputEncryptedChat max_date:int = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|maxDate|qint32||
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
readEncryptedHistoryAnswer(qint64 msgId, bool  result)
```
```c++
readEncryptedHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReadEncryptedHistoryAnswer(qint64 msgId, bool  result)
```
```c++
onReadEncryptedHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_READ_ENCRYPTED_HISTORY_CALLBACK

## Examples:

```c++
tg->readEncryptedHistory(peer, max_date, [=](TG_READ_ENCRYPTED_HISTORY_CALLBACK){
    ...
}, 30000);
```
