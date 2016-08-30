# Auth.resetAuthorizations

## Function:

TelegramCore::authResetAuthorizations

## Schema:

```c++
auth.resetAuthorizations#9fab0d1a = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
resetAuthorizationsAnswer(qint64 msgId, bool  result)
```
```c++
resetAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResetAuthorizationsAnswer(qint64 msgId, bool  result)
```
```c++
onResetAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESET_AUTHORIZATIONS_CALLBACK

## Examples:

```c++
tg->resetAuthorizations([=](TG_RESET_AUTHORIZATIONS_CALLBACK){
    ...
}, 30000);
```
