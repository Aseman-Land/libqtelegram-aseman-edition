# Messages.setBotPrecheckoutResults

## Function:

TelegramCore::messagesSetBotPrecheckoutResults

## Schema:

```c++
messages.setBotPrecheckoutResults#9c2dd95 flags:# success:flags.1?true query_id:long error:flags.0?string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|success|bool||
|queryId|qint64||
|error|QString||
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
setBotPrecheckoutResultsAnswer(qint64 msgId, bool  result)
```
```c++
setBotPrecheckoutResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetBotPrecheckoutResultsAnswer(qint64 msgId, bool  result)
```
```c++
onSetBotPrecheckoutResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_BOT_PRECHECKOUT_RESULTS_CALLBACK

## Examples:

```c++
tg->setBotPrecheckoutResults(success, query_id, error, [=](TG_SET_BOT_PRECHECKOUT_RESULTS_CALLBACK){
    ...
}, 30000);
```
