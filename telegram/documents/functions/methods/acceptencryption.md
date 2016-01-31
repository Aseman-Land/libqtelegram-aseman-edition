# Messages.acceptEncryption

## Function:

TelegramCore::messagesAcceptEncryption

## Schema:

`messages.acceptEncryption#3dbc0415 peer:InputEncryptedChat g_b:bytes key_fingerprint:long = EncryptedChat;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|gB|QByteArray||
|keyFingerprint|qint64||
|callBack|Callback<EncryptedChat\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[EncryptedChat](../../types/encryptedchat.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `acceptEncryptionAnswer(qint64 msgId, const EncryptedChat & result)`
* `acceptEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onAcceptEncryptionAnswer(qint64 msgId, const EncryptedChat & result)`
* `onAcceptEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_ACCEPT_ENCRYPTION_CALLBACK

## Examples:

`tg->acceptEncryption(peer, g_b, key_fingerprint, [=](TG_ACCEPT_ENCRYPTION_CALLBACK){
    ...
}, 30000);`
