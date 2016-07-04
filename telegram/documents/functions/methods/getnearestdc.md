# Help.getNearestDc

## Function:

TelegramCore::helpGetNearestDc

## Schema:

```c++
help.getNearestDc#1fb33026 = NearestDc;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[NearestDc](../../types/nearestdc.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[NearestDc](../../types/nearestdc.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getNearestDcAnswer(qint64 msgId, const NearestDc & result)
```
```c++
getNearestDcError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetNearestDcAnswer(qint64 msgId, const NearestDc & result)
```
```c++
onGetNearestDcError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_NEAREST_DC_CALLBACK

## Examples:

```c++
tg->getNearestDc([=](TG_GET_NEAREST_DC_CALLBACK){
    ...
}, 30000);
```
