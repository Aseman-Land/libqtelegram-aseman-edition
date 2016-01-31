# Account.setAccountTTL

## Function:

TelegramCore::accountSetAccountTTL

## Schema:

`account.setAccountTTL#2442485e ttl:AccountDaysTTL = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|ttl|[AccountDaysTTL](../../types/accountdaysttl.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `setAccountTTLAnswer(qint64 msgId, bool  result)`
* `setAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSetAccountTTLAnswer(qint64 msgId, bool  result)`
* `onSetAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SET_ACCOUNT_T_T_L_CALLBACK

## Examples:

`tg->setAccountTTL(ttl, [=](TG_SET_ACCOUNT_T_T_L_CALLBACK){
    ...
}, 30000);`
