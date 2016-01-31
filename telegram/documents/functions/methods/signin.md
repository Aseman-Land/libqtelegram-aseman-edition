# Auth.signIn

## Function:

TelegramCore::authSignIn

## Schema:

```c++
auth.signIn#bcd51581 phone_number:string phone_code_hash:string phone_code:string = auth.Authorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|phoneCode|QString||
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
signInAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
signInError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSignInAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
onSignInError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SIGN_IN_CALLBACK

## Examples:

```c++
tg->signIn(phone_number, phone_code_hash, phone_code, [=](TG_SIGN_IN_CALLBACK){
    ...
}, 30000);
```
