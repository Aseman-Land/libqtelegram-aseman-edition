# Auth.signIn

## Function:

TelegramCore::authSignIn

## Schema:

`auth.signIn#bcd51581 phone_number:string phone_code_hash:string phone_code:string = auth.Authorization;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|phoneCode|QString||
|callBack|Callback<AuthAuthorization\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthAuthorization](../../types/authauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `signInAnswer(qint64 msgId, const AuthAuthorization & result)`
* `signInError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSignInAnswer(qint64 msgId, const AuthAuthorization & result)`
* `onSignInError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SIGN_IN_CALLBACK

## Examples:

`tg->signIn(phone_number, phone_code_hash, phone_code, [=](TG_SIGN_IN_CALLBACK){
    ...
}, 30000);`
