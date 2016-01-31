# Messages.setInlineBotResults

## Function:

TelegramCore::messagesSetInlineBotResults

## Schema:

```c++
messages.setInlineBotResults#3f23ec12 flags:# gallery:flags.0?true private:flags.1?true query_id:long results:Vector<InputBotInlineResult> cache_time:int next_offset:flags.2?string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|gallery|bool||
|privateValue|bool||
|queryId|qint64||
|results|QList&lt;[InputBotInlineResult](../../types/inputbotinlineresult.md)&gt;||
|cacheTime|qint32||
|nextOffset|QString||
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
setInlineBotResultsAnswer(qint64 msgId, bool  result)
```
```c++
setInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetInlineBotResultsAnswer(qint64 msgId, bool  result)
```
```c++
onSetInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_INLINE_BOT_RESULTS_CALLBACK

## Examples:

```c++
tg->setInlineBotResults(gallery, privateValue, query_id, results, cache_time, next_offset, [=](TG_SET_INLINE_BOT_RESULTS_CALLBACK){
    ...
}, 30000);
```
