# Messages.sendEncrypted

## Function:

TelegramCore::messagesSendEncrypted

## Schema:

`messages.sendEncrypted#a9776773 peer:InputEncryptedChat random_id:long data:bytes = messages.SentEncryptedMessage;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|randomId|qint64||
|data|QByteArray||
|callBack|Callback<MessagesSentEncryptedMessage\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesSentEncryptedMessage](../../types/messagessentencryptedmessage.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendEncryptedAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)`
* `sendEncryptedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendEncryptedAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)`
* `onSendEncryptedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_ENCRYPTED_CALLBACK

## Examples:

`tg->sendEncrypted(peer, random_id, data, [=](TG_SEND_ENCRYPTED_CALLBACK){
    ...
}, 30000);`
