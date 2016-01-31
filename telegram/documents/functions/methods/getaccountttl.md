# Account.getAccountTTL

## Function:

TelegramCore::accountGetAccountTTL

## Schema:

`account.getAccountTTL#8fc711d = AccountDaysTTL;`
## Parameters:

|callBack|Callback<AccountDaysTTL\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountDaysTTL](../../types/accountdaysttl.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getAccountTTLAnswer(qint64 msgId, const AccountDaysTTL & result)`
* `getAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetAccountTTLAnswer(qint64 msgId, const AccountDaysTTL & result)`
* `onGetAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_ACCOUNT_T_T_L_CALLBACK

## Examples:

`tg->getAccountTTL([=](TG_GET_ACCOUNT_T_T_L_CALLBACK){
    ...
}, 30000);`
