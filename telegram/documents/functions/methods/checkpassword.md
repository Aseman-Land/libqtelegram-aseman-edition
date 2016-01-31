# Auth.checkPassword

## Function:

TelegramCore::authCheckPassword

## Schema:

```c++
auth.checkPassword#a63011e password_hash:bytes = auth.Authorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|passwordHash|QByteArray||
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
checkPasswordAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
checkPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCheckPasswordAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
onCheckPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CHECK_PASSWORD_CALLBACK

## Examples:

```c++
tg->checkPassword(password_hash, [=](TG_CHECK_PASSWORD_CALLBACK){
    ...
}, 30000);
```
