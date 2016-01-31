# Messages.acceptEncryption

## Function:

TelegramCore::messagesAcceptEncryption

## Schema:

```c++
messages.acceptEncryption#3dbc0415 peer:InputEncryptedChat g_b:bytes key_fingerprint:long = EncryptedChat;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|gB|QByteArray||
|keyFingerprint|qint64||
|callBack|Callback&lt;[EncryptedChat](../../types/encryptedchat.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[EncryptedChat](../../types/encryptedchat.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
acceptEncryptionAnswer(qint64 msgId, const EncryptedChat & result)
```
```c++
acceptEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onAcceptEncryptionAnswer(qint64 msgId, const EncryptedChat & result)
```
```c++
onAcceptEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_ACCEPT_ENCRYPTION_CALLBACK

## Examples:

```c++
tg->acceptEncryption(peer, g_b, key_fingerprint, [=](TG_ACCEPT_ENCRYPTION_CALLBACK){
    ...
}, 30000);
```
