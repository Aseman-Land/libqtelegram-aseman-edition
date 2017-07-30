# Payments.getPaymentReceipt

## Function:

TelegramCore::paymentsGetPaymentReceipt

## Schema:

```c++
payments.getPaymentReceipt#a092a980 msg_id:int = payments.PaymentReceipt;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|msgId|qint32||
|callBack|Callback&lt;[PaymentsPaymentReceipt](../../types/paymentspaymentreceipt.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PaymentsPaymentReceipt](../../types/paymentspaymentreceipt.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPaymentReceiptAnswer(qint64 msgId, const PaymentsPaymentReceipt & result)
```
```c++
getPaymentReceiptError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPaymentReceiptAnswer(qint64 msgId, const PaymentsPaymentReceipt & result)
```
```c++
onGetPaymentReceiptError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PAYMENT_RECEIPT_CALLBACK

## Examples:

```c++
tg->getPaymentReceipt(msg_id, [=](TG_GET_PAYMENT_RECEIPT_CALLBACK){
    ...
}, 30000);
```
