# Auth.resetAuthorizations

## Function:

TelegramCore::authResetAuthorizations

## Schema:

`auth.resetAuthorizations#9fab0d1a = Bool;`
## Parameters:

|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `resetAuthorizationsAnswer(qint64 msgId, bool  result)`
* `resetAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onResetAuthorizationsAnswer(qint64 msgId, bool  result)`
* `onResetAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RESET_AUTHORIZATIONS_CALLBACK

## Examples:

`tg->resetAuthorizations([=](TG_RESET_AUTHORIZATIONS_CALLBACK){
    ...
}, 30000);`
