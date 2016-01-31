# Auth.logOut

## Function:

TelegramCore::authLogOut

## Schema:

`auth.logOut#5717da40 = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `logOutAnswer(qint64 msgId, bool  result)`
* `logOutError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onLogOutAnswer(qint64 msgId, bool  result)`
* `onLogOutError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_LOG_OUT_CALLBACK

## Examples:

`tg->logOut([=](TG_LOG_OUT_CALLBACK){
    ...
}, 30000);`
