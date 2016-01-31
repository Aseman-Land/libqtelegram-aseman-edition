# Messages.setInlineBotResults

## Function:

TelegramCore::messagesSetInlineBotResults

## Schema:

`messages.setInlineBotResults#3f23ec12 flags:# gallery:flags.0?true private:flags.1?true query_id:long results:Vector<InputBotInlineResult> cache_time:int next_offset:flags.2?string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|gallery|bool||
|privateValue|bool||
|queryId|qint64||
|results|QList<InputBotInlineResult>||
|cacheTime|qint32||
|nextOffset|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `setInlineBotResultsAnswer(qint64 msgId, bool  result)`
* `setInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSetInlineBotResultsAnswer(qint64 msgId, bool  result)`
* `onSetInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SET_INLINE_BOT_RESULTS_CALLBACK

## Examples:

`tg->setInlineBotResults(gallery, privateValue, query_id, results, cache_time, next_offset, [=](TG_SET_INLINE_BOT_RESULTS_CALLBACK){
    ...
}, 30000);`
