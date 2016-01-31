# Auth.importAuthorization

## Function:

TelegramCore::authImportAuthorization

## Schema:

```c++
auth.importAuthorization#e3ef9613 id:int bytes:bytes = auth.Authorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|qint32||
|bytes|QByteArray||
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
importAuthorizationAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
importAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onImportAuthorizationAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
onImportAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_IMPORT_AUTHORIZATION_CALLBACK

## Examples:

```c++
tg->importAuthorization(id, bytes, [=](TG_IMPORT_AUTHORIZATION_CALLBACK){
    ...
}, 30000);
```
