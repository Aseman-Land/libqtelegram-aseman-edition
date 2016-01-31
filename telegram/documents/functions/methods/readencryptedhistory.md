# Messages.readEncryptedHistory

## Function:

TelegramCore::messagesReadEncryptedHistory

## Schema:

`messages.readEncryptedHistory#7f4b690a peer:InputEncryptedChat max_date:int = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|maxDate|qint32||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `readEncryptedHistoryAnswer(qint64 msgId, bool  result)`
* `readEncryptedHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReadEncryptedHistoryAnswer(qint64 msgId, bool  result)`
* `onReadEncryptedHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_READ_ENCRYPTED_HISTORY_CALLBACK

## Examples:

`tg->readEncryptedHistory(peer, max_date, [=](TG_READ_ENCRYPTED_HISTORY_CALLBACK){
    ...
}, 30000);`
