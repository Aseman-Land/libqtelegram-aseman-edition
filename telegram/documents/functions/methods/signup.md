# Auth.signUp

## Function:

TelegramCore::authSignUp

## Schema:

`auth.signUp#1b067634 phone_number:string phone_code_hash:string phone_code:string first_name:string last_name:string = auth.Authorization;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|phoneCode|QString||
|firstName|QString||
|lastName|QString||
|callBack|Callback<AuthAuthorization\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthAuthorization](../../types/authauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `signUpAnswer(qint64 msgId, const AuthAuthorization & result)`
* `signUpError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSignUpAnswer(qint64 msgId, const AuthAuthorization & result)`
* `onSignUpError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SIGN_UP_CALLBACK

## Examples:

`tg->signUp(phone_number, phone_code_hash, phone_code, first_name, last_name, [=](TG_SIGN_UP_CALLBACK){
    ...
}, 30000);`
