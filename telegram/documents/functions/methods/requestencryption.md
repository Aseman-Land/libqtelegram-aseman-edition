# Messages.requestEncryption

## Function:

TelegramCore::messagesRequestEncryption

## Schema:

`messages.requestEncryption#f64daf43 user_id:InputUser random_id:int g_a:bytes = EncryptedChat;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|userId|[InputUser](../../types/inputuser.md)||
|randomId|qint32||
|gA|QByteArray||
|callBack|Callback<EncryptedChat\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[EncryptedChat](../../types/encryptedchat.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `requestEncryptionAnswer(qint64 msgId, const EncryptedChat & result)`
* `requestEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onRequestEncryptionAnswer(qint64 msgId, const EncryptedChat & result)`
* `onRequestEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_REQUEST_ENCRYPTION_CALLBACK

## Examples:

`tg->requestEncryption(user_id, random_id, g_a, [=](TG_REQUEST_ENCRYPTION_CALLBACK){
    ...
}, 30000);`
