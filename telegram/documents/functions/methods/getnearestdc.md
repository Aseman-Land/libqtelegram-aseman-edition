# Help.getNearestDc

## Function:

TelegramCore::helpGetNearestDc

## Schema:

`help.getNearestDc#1fb33026 = NearestDc;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<NearestDc\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[NearestDc](../../types/nearestdc.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getNearestDcAnswer(qint64 msgId, const NearestDc & result)`
* `getNearestDcError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetNearestDcAnswer(qint64 msgId, const NearestDc & result)`
* `onGetNearestDcError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_NEAREST_DC_CALLBACK

## Examples:

`tg->getNearestDc([=](TG_GET_NEAREST_DC_CALLBACK){
    ...
}, 30000);`
