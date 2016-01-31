# Messages.sendEncryptedService

## Function:

TelegramCore::messagesSendEncryptedService

## Schema:

```c++
messages.sendEncryptedService#32d439a4 peer:InputEncryptedChat random_id:long data:bytes = messages.SentEncryptedMessage;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|randomId|qint64||
|data|QByteArray||
|callBack|Callback&lt;[MessagesSentEncryptedMessage](../../types/messagessentencryptedmessage.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesSentEncryptedMessage](../../types/messagessentencryptedmessage.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendEncryptedServiceAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)
```
```c++
sendEncryptedServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendEncryptedServiceAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)
```
```c++
onSendEncryptedServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_ENCRYPTED_SERVICE_CALLBACK

## Examples:

```c++
tg->sendEncryptedService(peer, random_id, data, [=](TG_SEND_ENCRYPTED_SERVICE_CALLBACK){
    ...
}, 30000);
```
