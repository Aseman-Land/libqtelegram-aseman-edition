# Account.registerDevice

## Function:

TelegramCore::accountRegisterDevice

## Schema:

`account.registerDevice#446c712c token_type:int token:string device_model:string system_version:string app_version:string app_sandbox:Bool lang_code:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|tokenType|qint32||
|token|QString||
|deviceModel|QString||
|systemVersion|QString||
|appVersion|QString||
|appSandbox|bool||
|langCode|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `registerDeviceAnswer(qint64 msgId, bool  result)`
* `registerDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onRegisterDeviceAnswer(qint64 msgId, bool  result)`
* `onRegisterDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_REGISTER_DEVICE_CALLBACK

## Examples:

`tg->registerDevice(token_type, token, device_model, system_version, app_version, app_sandbox, lang_code, [=](TG_REGISTER_DEVICE_CALLBACK){
    ...
}, 30000);`
