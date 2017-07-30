# Messages.setBotShippingResults

## Function:

TelegramCore::messagesSetBotShippingResults

## Schema:

```c++
messages.setBotShippingResults#e5f672fa flags:# query_id:long error:flags.0?string shipping_options:flags.1?Vector<ShippingOption> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|queryId|qint64||
|error|QString||
|shippingOptions|QList&lt;[ShippingOption](../../types/shippingoption.md)&gt;||
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
setBotShippingResultsAnswer(qint64 msgId, bool  result)
```
```c++
setBotShippingResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetBotShippingResultsAnswer(qint64 msgId, bool  result)
```
```c++
onSetBotShippingResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_BOT_SHIPPING_RESULTS_CALLBACK

## Examples:

```c++
tg->setBotShippingResults(query_id, error, shipping_options, [=](TG_SET_BOT_SHIPPING_RESULTS_CALLBACK){
    ...
}, 30000);
```
