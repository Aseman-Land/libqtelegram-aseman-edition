# Auth.requestPasswordRecovery

## Function:

TelegramCore::authRequestPasswordRecovery

## Schema:

```c++
auth.requestPasswordRecovery#d897bc66 = auth.PasswordRecovery;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[AuthPasswordRecovery](../../types/authpasswordrecovery.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AuthPasswordRecovery](../../types/authpasswordrecovery.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
requestPasswordRecoveryAnswer(qint64 msgId, const AuthPasswordRecovery & result)
```
```c++
requestPasswordRecoveryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onRequestPasswordRecoveryAnswer(qint64 msgId, const AuthPasswordRecovery & result)
```
```c++
onRequestPasswordRecoveryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REQUEST_PASSWORD_RECOVERY_CALLBACK

## Examples:

```c++
tg->requestPasswordRecovery([=](TG_REQUEST_PASSWORD_RECOVERY_CALLBACK){
    ...
}, 30000);
```
