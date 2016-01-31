# Account.unregisterDevice

## Function:

TelegramCore::accountUnregisterDevice

## Schema:

```c++
account.unregisterDevice#65c55b40 token_type:int token:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|tokenType|qint32||
|token|QString||
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
unregisterDeviceAnswer(qint64 msgId, bool  result)
```
```c++
unregisterDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUnregisterDeviceAnswer(qint64 msgId, bool  result)
```
```c++
onUnregisterDeviceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UNREGISTER_DEVICE_CALLBACK

## Examples:

```c++
tg->unregisterDevice(token_type, token, [=](TG_UNREGISTER_DEVICE_CALLBACK){
    ...
}, 30000);
```
