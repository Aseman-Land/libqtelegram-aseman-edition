# Messages.setTyping

## Function:

TelegramCore::messagesSetTyping

## Schema:

`messages.setTyping#a3825e50 peer:InputPeer action:SendMessageAction = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|action|[SendMessageAction](../../types/sendmessageaction.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `setTypingAnswer(qint64 msgId, bool  result)`
* `setTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSetTypingAnswer(qint64 msgId, bool  result)`
* `onSetTypingError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SET_TYPING_CALLBACK

## Examples:

`tg->setTyping(peer, action, [=](TG_SET_TYPING_CALLBACK){
    ...
}, 30000);`
