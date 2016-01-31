# Account.getPassword

## Function:

TelegramCore::accountGetPassword

## Schema:

`account.getPassword#548a30f5 = account.Password;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<AccountPassword\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountPassword](../../types/accountpassword.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getPasswordAnswer(qint64 msgId, const AccountPassword & result)`
* `getPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetPasswordAnswer(qint64 msgId, const AccountPassword & result)`
* `onGetPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_PASSWORD_CALLBACK

## Examples:

`tg->getPassword([=](TG_GET_PASSWORD_CALLBACK){
    ...
}, 30000);`
