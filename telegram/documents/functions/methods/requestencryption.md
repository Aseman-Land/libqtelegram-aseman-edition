# Messages.requestEncryption

## Function:

TelegramCore::messagesRequestEncryption

## Schema:

```c++
messages.requestEncryption#f64daf43 user_id:InputUser random_id:int g_a:bytes = EncryptedChat;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|userId|[InputUser](../../types/inputuser.md)||
|randomId|qint32||
|gA|QByteArray||
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
requestEncryptionAnswer(qint64 msgId, const EncryptedChat & result)
```
```c++
requestEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onRequestEncryptionAnswer(qint64 msgId, const EncryptedChat & result)
```
```c++
onRequestEncryptionError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REQUEST_ENCRYPTION_CALLBACK

## Examples:

```c++
tg->requestEncryption(user_id, random_id, g_a, [=](TG_REQUEST_ENCRYPTION_CALLBACK){
    ...
}, 30000);
```
