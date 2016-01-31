# Auth.requestPasswordRecovery

## Function:

TelegramCore::authRequestPasswordRecovery

## Schema:

`auth.requestPasswordRecovery#d897bc66 = auth.PasswordRecovery;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<AuthPasswordRecovery\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthPasswordRecovery](../../types/authpasswordrecovery.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `requestPasswordRecoveryAnswer(qint64 msgId, const AuthPasswordRecovery & result)`
* `requestPasswordRecoveryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onRequestPasswordRecoveryAnswer(qint64 msgId, const AuthPasswordRecovery & result)`
* `onRequestPasswordRecoveryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_REQUEST_PASSWORD_RECOVERY_CALLBACK

## Examples:

`tg->requestPasswordRecovery([=](TG_REQUEST_PASSWORD_RECOVERY_CALLBACK){
    ...
}, 30000);`
