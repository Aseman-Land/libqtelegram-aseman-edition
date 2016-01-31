# Messages.setEncryptedTyping

## Function:

TelegramCore::messagesSetEncryptedTyping

## Schema:

```c++
messages.setEncryptedTyping#791451ed peer:InputEncryptedChat typing:Bool = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
|typing|bool||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
setEncryptedTypingAnswer(qint64 msgId, bool  result)
```
```c++
setEncryptedTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetEncryptedTypingAnswer(qint64 msgId, bool  result)
```
```c++
onSetEncryptedTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_ENCRYPTED_TYPING_CALLBACK

## Examples:

```c++
tg->setEncryptedTyping(peer, typing, [=](TG_SET_ENCRYPTED_TYPING_CALLBACK){
    ...
}, 30000);
```
