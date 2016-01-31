# Account.updateDeviceLocked

## Function:

TelegramCore::accountUpdateDeviceLocked

## Schema:

`account.updateDeviceLocked#38df3532 period:int = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|period|qint32||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updateDeviceLockedAnswer(qint64 msgId, bool  result)`
* `updateDeviceLockedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdateDeviceLockedAnswer(qint64 msgId, bool  result)`
* `onUpdateDeviceLockedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_DEVICE_LOCKED_CALLBACK

## Examples:

`tg->updateDeviceLocked(period, [=](TG_UPDATE_DEVICE_LOCKED_CALLBACK){
    ...
}, 30000);`
