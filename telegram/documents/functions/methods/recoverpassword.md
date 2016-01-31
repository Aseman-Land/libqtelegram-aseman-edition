# Auth.recoverPassword

## Function:

TelegramCore::authRecoverPassword

## Schema:

`auth.recoverPassword#4ea56e92 code:string = auth.Authorization;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|code|QString||
|callBack|Callback<AuthAuthorization\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthAuthorization](../../types/authauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `recoverPasswordAnswer(qint64 msgId, const AuthAuthorization & result)`
* `recoverPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onRecoverPasswordAnswer(qint64 msgId, const AuthAuthorization & result)`
* `onRecoverPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RECOVER_PASSWORD_CALLBACK

## Examples:

`tg->recoverPassword(code, [=](TG_RECOVER_PASSWORD_CALLBACK){
    ...
}, 30000);`
