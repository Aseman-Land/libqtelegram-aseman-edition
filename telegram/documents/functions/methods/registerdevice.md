# Account.registerDevice

## Function:

TelegramCore::accountRegisterDevice

## Schema:

```c++
account.registerDevice#446c712c token_type:int token:string device_model:string system_version:string app_version:string app_sandbox:Bool lang_code:string = Bool;
```
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
registerDeviceAnswer(qint64 msgId, bool  result)
```
```c++
registerDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onRegisterDeviceAnswer(qint64 msgId, bool  result)
```
```c++
onRegisterDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REGISTER_DEVICE_CALLBACK

## Examples:

```c++
tg->registerDevice(token_type, token, device_model, system_version, app_version, app_sandbox, lang_code, [=](TG_REGISTER_DEVICE_CALLBACK){
    ...
}, 30000);
```
