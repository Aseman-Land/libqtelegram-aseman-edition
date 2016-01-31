# Account.resetAuthorization

## Function:

TelegramCore::accountResetAuthorization

## Schema:

`account.resetAuthorization#df77f3bc hash:long = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint64||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `resetAuthorizationAnswer(qint64 msgId, bool  result)`
* `resetAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onResetAuthorizationAnswer(qint64 msgId, bool  result)`
* `onResetAuthorizationError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RESET_AUTHORIZATION_CALLBACK

## Examples:

`tg->resetAuthorization(hash, [=](TG_RESET_AUTHORIZATION_CALLBACK){
    ...
}, 30000);`
