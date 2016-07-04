# Account.getAccountTTL

## Function:

TelegramCore::accountGetAccountTTL

## Schema:

```c++
account.getAccountTTL#8fc711d = AccountDaysTTL;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[AccountDaysTTL](../../types/accountdaysttl.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountDaysTTL](../../types/accountdaysttl.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAccountTTLAnswer(qint64 msgId, const AccountDaysTTL & result)
```
```c++
getAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAccountTTLAnswer(qint64 msgId, const AccountDaysTTL & result)
```
```c++
onGetAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ACCOUNT_T_T_L_CALLBACK

## Examples:

```c++
tg->getAccountTTL([=](TG_GET_ACCOUNT_T_T_L_CALLBACK){
    ...
}, 30000);
```
