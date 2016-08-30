# Messages.getBotCallbackAnswer

## Function:

TelegramCore::messagesGetBotCallbackAnswer

## Schema:

```c++
messages.getBotCallbackAnswer#a6e94f04 peer:InputPeer msg_id:int data:bytes = messages.BotCallbackAnswer;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|msgId|qint32||
|data|QByteArray||
|callBack|Callback&lt;[MessagesBotCallbackAnswer](../../types/messagesbotcallbackanswer.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesBotCallbackAnswer](../../types/messagesbotcallbackanswer.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getBotCallbackAnswerAnswer(qint64 msgId, const MessagesBotCallbackAnswer & result)
```
```c++
getBotCallbackAnswerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetBotCallbackAnswerAnswer(qint64 msgId, const MessagesBotCallbackAnswer & result)
```
```c++
onGetBotCallbackAnswerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_BOT_CALLBACK_ANSWER_CALLBACK

## Examples:

```c++
tg->getBotCallbackAnswer(peer, msg_id, data, [=](TG_GET_BOT_CALLBACK_ANSWER_CALLBACK){
    ...
}, 30000);
```
