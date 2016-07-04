# Messages.discardEncryption

## Function:

TelegramCore::messagesDiscardEncryption

## Schema:

```c++
messages.discardEncryption#edd923c5 chat_id:int = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
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
discardEncryptionAnswer(qint64 msgId, bool  result)
```
```c++
discardEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDiscardEncryptionAnswer(qint64 msgId, bool  result)
```
```c++
onDiscardEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DISCARD_ENCRYPTION_CALLBACK

## Examples:

```c++
tg->discardEncryption(chat_id, [=](TG_DISCARD_ENCRYPTION_CALLBACK){
    ...
}, 30000);
```
