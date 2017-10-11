# Payments.validateRequestedInfo

## Function:

TelegramCore::paymentsValidateRequestedInfo

## Schema:

```c++
payments.validateRequestedInfo#770a8e74 flags:# save:flags.0?true msg_id:int info:PaymentRequestedInfo = payments.ValidatedRequestedInfo;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|save|bool||
|msgId|qint32||
|info|[PaymentRequestedInfo](../../types/paymentrequestedinfo.md)||
|callBack|Callback&lt;[PaymentsValidatedRequestedInfo](../../types/paymentsvalidatedrequestedinfo.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PaymentsValidatedRequestedInfo](../../types/paymentsvalidatedrequestedinfo.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
validateRequestedInfoAnswer(qint64 msgId, const PaymentsValidatedRequestedInfo & result)
```
```c++
validateRequestedInfoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onValidateRequestedInfoAnswer(qint64 msgId, const PaymentsValidatedRequestedInfo & result)
```
```c++
onValidateRequestedInfoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_VALIDATE_REQUESTED_INFO_CALLBACK

## Examples:

```c++
tg->validateRequestedInfo(save, msg_id, info, [=](TG_VALIDATE_REQUESTED_INFO_CALLBACK){
    ...
}, 30000);
```
