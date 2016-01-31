# Messages.discardEncryption

## Function:

TelegramCore::messagesDiscardEncryption

## Schema:

`messages.discardEncryption#edd923c5 chat_id:int = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `discardEncryptionAnswer(qint64 msgId, bool  result)`
* `discardEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDiscardEncryptionAnswer(qint64 msgId, bool  result)`
* `onDiscardEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DISCARD_ENCRYPTION_CALLBACK

## Examples:

`tg->discardEncryption(chat_id, [=](TG_DISCARD_ENCRYPTION_CALLBACK){
    ...
}, 30000);`
