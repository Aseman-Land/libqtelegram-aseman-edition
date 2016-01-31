# Messages.sendEncryptedFile

## Function:

TelegramCore::messagesSendEncryptedFile

## Schema:

```c++
messages.sendEncryptedFile#9a901b66 peer:InputEncryptedChat random_id:long data:bytes file:InputEncryptedFile = messages.SentEncryptedMessage;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|randomId|qint64||
|data|QByteArray||
|file|[InputEncryptedFile](../../types/inputencryptedfile.md)||
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
sendEncryptedFileAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)
```
```c++
sendEncryptedFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendEncryptedFileAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)
```
```c++
onSendEncryptedFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_ENCRYPTED_FILE_CALLBACK

## Examples:

```c++
tg->sendEncryptedFile(peer, random_id, data, file, [=](TG_SEND_ENCRYPTED_FILE_CALLBACK){
    ...
}, 30000);
```
