# Auth.exportAuthorization

## Function:

TelegramCore::authExportAuthorization

## Schema:

`auth.exportAuthorization#e5bfffcd dc_id:int = auth.ExportedAuthorization;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|dcId|qint32||
|callBack|Callback<AuthExportedAuthorization\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthExportedAuthorization](../../types/authexportedauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `exportAuthorizationAnswer(qint64 msgId, const AuthExportedAuthorization & result)`
* `exportAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onExportAuthorizationAnswer(qint64 msgId, const AuthExportedAuthorization & result)`
* `onExportAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EXPORT_AUTHORIZATION_CALLBACK

## Examples:

`tg->exportAuthorization(dc_id, [=](TG_EXPORT_AUTHORIZATION_CALLBACK){
    ...
}, 30000);`
