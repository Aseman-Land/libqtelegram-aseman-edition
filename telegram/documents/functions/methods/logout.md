# Auth.logOut

## Function:

TelegramCore::authLogOut

## Schema:

```c++
auth.logOut#5717da40 = Bool;
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
logOutAnswer(qint64 msgId, bool  result)
```
```c++
logOutError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onLogOutAnswer(qint64 msgId, bool  result)
```
```c++
onLogOutError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_LOG_OUT_CALLBACK

## Examples:

```c++
tg->logOut([=](TG_LOG_OUT_CALLBACK){
    ...
}, 30000);
```
