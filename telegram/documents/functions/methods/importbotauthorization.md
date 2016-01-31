# Auth.importBotAuthorization

## Function:

TelegramCore::authImportBotAuthorization

## Schema:

`auth.importBotAuthorization#67a3ff2c flags:int api_id:int api_hash:string bot_auth_token:string = auth.Authorization;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|flags|qint32||
|apiId|qint32||
|apiHash|QString||
|botAuthToken|QString||
|callBack|Callback<AuthAuthorization\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthAuthorization](../../types/authauthorization.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `importBotAuthorizationAnswer(qint64 msgId, const AuthAuthorization & result)`
* `importBotAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onImportBotAuthorizationAnswer(qint64 msgId, const AuthAuthorization & result)`
* `onImportBotAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_IMPORT_BOT_AUTHORIZATION_CALLBACK

## Examples:

`tg->importBotAuthorization(flags, api_id, api_hash, bot_auth_token, [=](TG_IMPORT_BOT_AUTHORIZATION_CALLBACK){
    ...
}, 30000);`
