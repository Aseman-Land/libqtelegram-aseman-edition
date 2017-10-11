# Payments.getPaymentForm

## Function:

TelegramCore::paymentsGetPaymentForm

## Schema:

```c++
payments.getPaymentForm#99f09745 msg_id:int = payments.PaymentForm;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|msgId|qint32||
|callBack|Callback&lt;[PaymentsPaymentForm](../../types/paymentspaymentform.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PaymentsPaymentForm](../../types/paymentspaymentform.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPaymentFormAnswer(qint64 msgId, const PaymentsPaymentForm & result)
```
```c++
getPaymentFormError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPaymentFormAnswer(qint64 msgId, const PaymentsPaymentForm & result)
```
```c++
onGetPaymentFormError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PAYMENT_FORM_CALLBACK

## Examples:

```c++
tg->getPaymentForm(msg_id, [=](TG_GET_PAYMENT_FORM_CALLBACK){
    ...
}, 30000);
```
