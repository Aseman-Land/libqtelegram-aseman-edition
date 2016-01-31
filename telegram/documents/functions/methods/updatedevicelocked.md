# Account.updateDeviceLocked

## Function:

TelegramCore::accountUpdateDeviceLocked

## Schema:

```c++
account.updateDeviceLocked#38df3532 period:int = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|period|qint32||
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
updateDeviceLockedAnswer(qint64 msgId, bool  result)
```
```c++
updateDeviceLockedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateDeviceLockedAnswer(qint64 msgId, bool  result)
```
```c++
onUpdateDeviceLockedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_DEVICE_LOCKED_CALLBACK

## Examples:

```c++
tg->updateDeviceLocked(period, [=](TG_UPDATE_DEVICE_LOCKED_CALLBACK){
    ...
}, 30000);
```
