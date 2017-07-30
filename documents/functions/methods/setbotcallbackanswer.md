# Messages.setBotCallbackAnswer

## Function:

TelegramCore::messagesSetBotCallbackAnswer

## Schema:

```c++
messages.setBotCallbackAnswer#d58f130a flags:# alert:flags.1?true query_id:long message:flags.0?string url:flags.2?string cache_time:int = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|alert|bool||
|queryId|qint64||
|message|QString||
|url|QString||
|cacheTime|qint32||
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
setBotCallbackAnswerAnswer(qint64 msgId, bool  result)
```
```c++
setBotCallbackAnswerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetBotCallbackAnswerAnswer(qint64 msgId, bool  result)
```
```c++
onSetBotCallbackAnswerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_BOT_CALLBACK_ANSWER_CALLBACK

## Examples:

```c++
tg->setBotCallbackAnswer(alert, query_id, message, url, cache_time, [=](TG_SET_BOT_CALLBACK_ANSWER_CALLBACK){
    ...
}, 30000);
```
