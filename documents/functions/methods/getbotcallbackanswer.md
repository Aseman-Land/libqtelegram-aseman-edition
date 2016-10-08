# Messages.getBotCallbackAnswer

## Function:

TelegramCore::messagesGetBotCallbackAnswer

## Schema:

```c++
messages.getBotCallbackAnswer#810a9fec flags:# game:flags.1?true peer:InputPeer msg_id:int data:flags.0?bytes = messages.BotCallbackAnswer;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|game|bool||
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
tg->getBotCallbackAnswer(game, peer, msg_id, data, [=](TG_GET_BOT_CALLBACK_ANSWER_CALLBACK){
    ...
}, 30000);
```
