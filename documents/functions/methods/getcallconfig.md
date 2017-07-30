# Phone.getCallConfig

## Function:

TelegramCore::phoneGetCallConfig

## Schema:

```c++
phone.getCallConfig#55451fa9 = DataJSON;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
getCallConfigAnswer(qint64 msgId, const DataJSON & result)
```
```c++
getCallConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetCallConfigAnswer(qint64 msgId, const DataJSON & result)
```
```c++
onGetCallConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CALL_CONFIG_CALLBACK

## Examples:

```c++
tg->getCallConfig([=](TG_GET_CALL_CONFIG_CALLBACK){
    ...
}, 30000);
```
