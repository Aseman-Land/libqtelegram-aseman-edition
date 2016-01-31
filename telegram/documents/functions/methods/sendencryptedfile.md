# Messages.sendEncryptedFile

## Function:

TelegramCore::messagesSendEncryptedFile

## Schema:

`messages.sendEncryptedFile#9a901b66 peer:InputEncryptedChat random_id:long data:bytes file:InputEncryptedFile = messages.SentEncryptedMessage;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|randomId|qint64||
|data|QByteArray||
|file|[InputEncryptedFile](../../types/inputencryptedfile.md)||
|callBack|Callback<MessagesSentEncryptedMessage\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesSentEncryptedMessage](../../types/messagessentencryptedmessage.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendEncryptedFileAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)`
* `sendEncryptedFileError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendEncryptedFileAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)`
* `onSendEncryptedFileError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_ENCRYPTED_FILE_CALLBACK

## Examples:

`tg->sendEncryptedFile(peer, random_id, data, file, [=](TG_SEND_ENCRYPTED_FILE_CALLBACK){
    ...
}, 30000);`
