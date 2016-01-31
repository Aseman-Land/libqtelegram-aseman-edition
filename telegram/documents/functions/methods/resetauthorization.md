# Account.resetAuthorization

## Function:

TelegramCore::accountResetAuthorization

## Schema:

```c++
account.resetAuthorization#df77f3bc hash:long = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint64||
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
resetAuthorizationAnswer(qint64 msgId, bool  result)
```
```c++
resetAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResetAuthorizationAnswer(qint64 msgId, bool  result)
```
```c++
onResetAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESET_AUTHORIZATION_CALLBACK

## Examples:

```c++
tg->resetAuthorization(hash, [=](TG_RESET_AUTHORIZATION_CALLBACK){
    ...
}, 30000);
```
