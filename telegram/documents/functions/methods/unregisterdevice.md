# Account.unregisterDevice

## Function:

TelegramCore::accountUnregisterDevice

## Schema:

`account.unregisterDevice#65c55b40 token_type:int token:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|tokenType|qint32||
|token|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `unregisterDeviceAnswer(qint64 msgId, bool  result)`
* `unregisterDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUnregisterDeviceAnswer(qint64 msgId, bool  result)`
* `onUnregisterDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UNREGISTER_DEVICE_CALLBACK

## Examples:

`tg->unregisterDevice(token_type, token, [=](TG_UNREGISTER_DEVICE_CALLBACK){
    ...
}, 30000);`
