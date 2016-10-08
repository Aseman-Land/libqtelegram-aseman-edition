# Auth.dropTempAuthKeys

## Function:

TelegramCore::authDropTempAuthKeys

## Schema:

```c++
auth.dropTempAuthKeys#8e48a188 except_auth_keys:Vector<long> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|exceptAuthKeys|QList&lt;qint64&gt;||
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
dropTempAuthKeysAnswer(qint64 msgId, bool  result)
```
```c++
dropTempAuthKeysError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDropTempAuthKeysAnswer(qint64 msgId, bool  result)
```
```c++
onDropTempAuthKeysError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DROP_TEMP_AUTH_KEYS_CALLBACK

## Examples:

```c++
tg->dropTempAuthKeys(except_auth_keys, [=](TG_DROP_TEMP_AUTH_KEYS_CALLBACK){
    ...
}, 30000);
```
