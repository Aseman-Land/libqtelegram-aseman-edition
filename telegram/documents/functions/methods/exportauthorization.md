# Auth.exportAuthorization

## Function:

TelegramCore::authExportAuthorization

## Schema:

```c++
auth.exportAuthorization#e5bfffcd dc_id:int = auth.ExportedAuthorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|dcId|qint32||
|callBack|Callback&lt;[AuthExportedAuthorization](../../types/authexportedauthorization.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AuthExportedAuthorization](../../types/authexportedauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
exportAuthorizationAnswer(qint64 msgId, const AuthExportedAuthorization & result)
```
```c++
exportAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onExportAuthorizationAnswer(qint64 msgId, const AuthExportedAuthorization & result)
```
```c++
onExportAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EXPORT_AUTHORIZATION_CALLBACK

## Examples:

```c++
tg->exportAuthorization(dc_id, [=](TG_EXPORT_AUTHORIZATION_CALLBACK){
    ...
}, 30000);
```
