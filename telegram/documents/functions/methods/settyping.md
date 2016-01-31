# Messages.setTyping

## Function:

TelegramCore::messagesSetTyping

## Schema:

```c++
messages.setTyping#a3825e50 peer:InputPeer action:SendMessageAction = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|action|[SendMessageAction](../../types/sendmessageaction.md)||
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
setTypingAnswer(qint64 msgId, bool  result)
```
```c++
setTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetTypingAnswer(qint64 msgId, bool  result)
```
```c++
onSetTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_TYPING_CALLBACK

## Examples:

```c++
tg->setTyping(peer, action, [=](TG_SET_TYPING_CALLBACK){
    ...
}, 30000);
```
