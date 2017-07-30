# Bots.sendCustomRequest

## Function:

TelegramCore::botsSendCustomRequest

## Schema:

```c++
bots.sendCustomRequest#aa2769ed custom_method:string params:DataJSON = DataJSON;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|customMethod|QString||
|params|[DataJSON](../../types/datajson.md)||
|callBack|Callback&lt;[DataJSON](../../types/datajson.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[DataJSON](../../types/datajson.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendCustomRequestAnswer(qint64 msgId, const DataJSON & result)
```
```c++
sendCustomRequestError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendCustomRequestAnswer(qint64 msgId, const DataJSON & result)
```
```c++
onSendCustomRequestError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CUSTOM_REQUEST_CALLBACK

## Examples:

```c++
tg->sendCustomRequest(custom_method, params, [=](TG_SEND_CUSTOM_REQUEST_CALLBACK){
    ...
}, 30000);
```
