# Auth.importBotAuthorization

## Function:

TelegramCore::authImportBotAuthorization

## Schema:

```c++
auth.importBotAuthorization#67a3ff2c flags:int api_id:int api_hash:string bot_auth_token:string = auth.Authorization;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|flags|qint32||
|apiId|qint32||
|apiHash|QString||
|botAuthToken|QString||
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
importBotAuthorizationAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
importBotAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onImportBotAuthorizationAnswer(qint64 msgId, const AuthAuthorization & result)
```
```c++
onImportBotAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_IMPORT_BOT_AUTHORIZATION_CALLBACK

## Examples:

```c++
tg->importBotAuthorization(flags, api_id, api_hash, bot_auth_token, [=](TG_IMPORT_BOT_AUTHORIZATION_CALLBACK){
    ...
}, 30000);
```
