# Payments.sendPaymentForm

## Function:

TelegramCore::paymentsSendPaymentForm

## Schema:

```c++
payments.sendPaymentForm#2b8879b3 flags:# msg_id:int requested_info_id:flags.0?string shipping_option_id:flags.1?string credentials:InputPaymentCredentials = payments.PaymentResult;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|msgId|qint32||
|requestedInfoId|QString||
|shippingOptionId|QString||
|credentials|[InputPaymentCredentials](../../types/inputpaymentcredentials.md)||
|callBack|Callback&lt;[PaymentsPaymentResult](../../types/paymentspaymentresult.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PaymentsPaymentResult](../../types/paymentspaymentresult.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendPaymentFormAnswer(qint64 msgId, const PaymentsPaymentResult & result)
```
```c++
sendPaymentFormError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendPaymentFormAnswer(qint64 msgId, const PaymentsPaymentResult & result)
```
```c++
onSendPaymentFormError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_PAYMENT_FORM_CALLBACK

## Examples:

```c++
tg->sendPaymentForm(msg_id, requested_info_id, shipping_option_id, credentials, [=](TG_SEND_PAYMENT_FORM_CALLBACK){
    ...
}, 30000);
```
