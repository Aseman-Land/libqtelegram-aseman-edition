# Payments.getSavedInfo

## Function:

TelegramCore::paymentsGetSavedInfo

## Schema:

```c++
payments.getSavedInfo#227d824b = payments.SavedInfo;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[PaymentsSavedInfo](../../types/paymentssavedinfo.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PaymentsSavedInfo](../../types/paymentssavedinfo.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getSavedInfoAnswer(qint64 msgId, const PaymentsSavedInfo & result)
```
```c++
getSavedInfoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetSavedInfoAnswer(qint64 msgId, const PaymentsSavedInfo & result)
```
```c++
onGetSavedInfoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_SAVED_INFO_CALLBACK

## Examples:

```c++
tg->getSavedInfo([=](TG_GET_SAVED_INFO_CALLBACK){
    ...
}, 30000);
```
