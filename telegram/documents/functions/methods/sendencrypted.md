# Messages.sendEncrypted

## Function:

TelegramCore::messagesSendEncrypted

## Schema:

```c++
messages.sendEncrypted#a9776773 peer:InputEncryptedChat random_id:long data:bytes = messages.SentEncryptedMessage;
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
sendEncryptedAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)
```
```c++
sendEncryptedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendEncryptedAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)
```
```c++
onSendEncryptedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_ENCRYPTED_CALLBACK

## Examples:

```c++
tg->sendEncrypted(peer, random_id, data, [=](TG_SEND_ENCRYPTED_CALLBACK){
    ...
}, 30000);
```
