# Auth.signUp

## Function:

TelegramCore::authSignUp

## Schema:

```c++
auth.signUp#1b067634 phone_number:string phone_code_hash:string phone_code:string first_name:string last_name:string = auth.Authorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|phoneCode|QString||
|firstName|QString||
|lastName|QString||
|callBack|Callback&lt;[AuthAuthorization](../../types/authauthorization.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AuthAuthorization](../../types/authauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
signUpAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
signUpError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSignUpAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
onSignUpError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SIGN_UP_CALLBACK

## Examples:

```c++
tg->signUp(phone_number, phone_code_hash, phone_code, first_name, last_name, [=](TG_SIGN_UP_CALLBACK){
    ...
}, 30000);
```
