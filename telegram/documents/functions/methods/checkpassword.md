# Auth.checkPassword

## Function:

TelegramCore::authCheckPassword

## Schema:

`auth.checkPassword#a63011e password_hash:bytes = auth.Authorization;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|passwordHash|QByteArray||
|callBack|Callback<AuthAuthorization\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthAuthorization](../../types/authauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `checkPasswordAnswer(qint64 msgId, const AuthAuthorization & result)`
* `checkPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onCheckPasswordAnswer(qint64 msgId, const AuthAuthorization & result)`
* `onCheckPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CHECK_PASSWORD_CALLBACK

## Examples:

`tg->checkPassword(password_hash, [=](TG_CHECK_PASSWORD_CALLBACK){
    ...
}, 30000);`
