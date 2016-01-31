# Auth.bindTempAuthKey

## Function:

TelegramCore::authBindTempAuthKey

## Schema:

`auth.bindTempAuthKey#cdd42a05 perm_auth_key_id:long nonce:long expires_at:int encrypted_message:bytes = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|permAuthKeyId|qint64||
|nonce|qint64||
|expiresAt|qint32||
|encryptedMessage|QByteArray||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `bindTempAuthKeyAnswer(qint64 msgId, bool  result)`
* `bindTempAuthKeyError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onBindTempAuthKeyAnswer(qint64 msgId, bool  result)`
* `onBindTempAuthKeyError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_BIND_TEMP_AUTH_KEY_CALLBACK

## Examples:

`tg->bindTempAuthKey(perm_auth_key_id, nonce, expires_at, encrypted_message, [=](TG_BIND_TEMP_AUTH_KEY_CALLBACK){
    ...
}, 30000);`
