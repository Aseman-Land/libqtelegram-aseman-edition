# Account.setAccountTTL

## Function:

TelegramCore::accountSetAccountTTL

## Schema:

```c++
account.setAccountTTL#2442485e ttl:AccountDaysTTL = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|ttl|[AccountDaysTTL](../../types/accountdaysttl.md)||
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
setAccountTTLAnswer(qint64 msgId, bool  result)
```
```c++
setAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetAccountTTLAnswer(qint64 msgId, bool  result)
```
```c++
onSetAccountTTLError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_ACCOUNT_T_T_L_CALLBACK

## Examples:

```c++
tg->setAccountTTL(ttl, [=](TG_SET_ACCOUNT_T_T_L_CALLBACK){
    ...
}, 30000);
```
