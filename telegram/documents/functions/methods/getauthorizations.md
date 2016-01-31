# Account.getAuthorizations

## Function:

TelegramCore::accountGetAuthorizations

## Schema:

`account.getAuthorizations#e320c158 = account.Authorizations;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<AccountAuthorizations\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountAuthorizations](../../types/accountauthorizations.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getAuthorizationsAnswer(qint64 msgId, const AccountAuthorizations & result)`
* `getAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetAuthorizationsAnswer(qint64 msgId, const AccountAuthorizations & result)`
* `onGetAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_AUTHORIZATIONS_CALLBACK

## Examples:

`tg->getAuthorizations([=](TG_GET_AUTHORIZATIONS_CALLBACK){
    ...
}, 30000);`
