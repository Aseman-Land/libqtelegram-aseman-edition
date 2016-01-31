# Messages.setEncryptedTyping

## Function:

TelegramCore::messagesSetEncryptedTyping

## Schema:

`messages.setEncryptedTyping#791451ed peer:InputEncryptedChat typing:Bool = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|typing|bool||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `setEncryptedTypingAnswer(qint64 msgId, bool  result)`
* `setEncryptedTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSetEncryptedTypingAnswer(qint64 msgId, bool  result)`
* `onSetEncryptedTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SET_ENCRYPTED_TYPING_CALLBACK

## Examples:

`tg->setEncryptedTyping(peer, typing, [=](TG_SET_ENCRYPTED_TYPING_CALLBACK){
    ...
}, 30000);`
