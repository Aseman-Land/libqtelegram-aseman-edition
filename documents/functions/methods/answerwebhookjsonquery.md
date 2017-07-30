# Bots.answerWebhookJSONQuery

## Function:

TelegramCore::botsAnswerWebhookJSONQuery

## Schema:

```c++
bots.answerWebhookJSONQuery#e6213f4d query_id:long data:DataJSON = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|queryId|qint64||
|data|[DataJSON](../../types/datajson.md)||
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
answerWebhookJSONQueryAnswer(qint64 msgId, bool  result)
```
```c++
answerWebhookJSONQueryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onAnswerWebhookJSONQueryAnswer(qint64 msgId, bool  result)
```
```c++
onAnswerWebhookJSONQueryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_ANSWER_WEBHOOK_J_S_O_N_QUERY_CALLBACK

## Examples:

```c++
tg->answerWebhookJSONQuery(query_id, data, [=](TG_ANSWER_WEBHOOK_J_S_O_N_QUERY_CALLBACK){
    ...
}, 30000);
```
