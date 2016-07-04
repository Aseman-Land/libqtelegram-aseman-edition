# Auth.bindTempAuthKey

## Function:

TelegramCore::authBindTempAuthKey

## Schema:

```c++
auth.bindTempAuthKey#cdd42a05 perm_auth_key_id:long nonce:long expires_at:int encrypted_message:bytes = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|permAuthKeyId|qint64||
|nonce|qint64||
|expiresAt|qint32||
|encryptedMessage|QByteArray||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
bindTempAuthKeyAnswer(qint64 msgId, bool  result)
```
```c++
bindTempAuthKeyError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onBindTempAuthKeyAnswer(qint64 msgId, bool  result)
```
```c++
onBindTempAuthKeyError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_BIND_TEMP_AUTH_KEY_CALLBACK

## Examples:

```c++
tg->bindTempAuthKey(perm_auth_key_id, nonce, expires_at, encrypted_message, [=](TG_BIND_TEMP_AUTH_KEY_CALLBACK){
    ...
}, 30000);
```
