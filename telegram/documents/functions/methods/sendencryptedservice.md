# Messages.sendEncryptedService

## Function:

TelegramCore::messagesSendEncryptedService

## Schema:

`messages.sendEncryptedService#32d439a4 peer:InputEncryptedChat random_id:long data:bytes = messages.SentEncryptedMessage;`
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

* `sendEncryptedServiceAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)`
* `sendEncryptedServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendEncryptedServiceAnswer(qint64 msgId, const MessagesSentEncryptedMessage & result)`
* `onSendEncryptedServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_ENCRYPTED_SERVICE_CALLBACK

## Examples:

`tg->sendEncryptedService(peer, random_id, data, [=](TG_SEND_ENCRYPTED_SERVICE_CALLBACK){
    ...
}, 30000);`
