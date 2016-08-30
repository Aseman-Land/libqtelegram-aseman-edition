# Auth.recoverPassword

## Function:

TelegramCore::authRecoverPassword

## Schema:

```c++
auth.recoverPassword#4ea56e92 code:string = auth.Authorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|code|QString||
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
recoverPasswordAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
recoverPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onRecoverPasswordAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
onRecoverPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RECOVER_PASSWORD_CALLBACK

## Examples:

```c++
tg->recoverPassword(code, [=](TG_RECOVER_PASSWORD_CALLBACK){
    ...
}, 30000);
```
