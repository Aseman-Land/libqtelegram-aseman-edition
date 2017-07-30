# PaymentsPaymentReceipt

## Types

* [typePaymentsPaymentReceipt](#paymentspaymentreceipttypepaymentspaymentreceipt)

## PaymentsPaymentReceipt::typePaymentsPaymentReceipt

#### Schema:

```c++
payments.paymentReceipt#500911e1 flags:# date:int bot_id:int invoice:Invoice provider_id:int info:flags.0?PaymentRequestedInfo shipping:flags.1?ShippingOption currency:string total_amount:long credentials_title:string users:Vector<User> = payments.PaymentReceipt;
```

#### Parameters:

|Name|Type|
|----|----|
|date|qint32|
|botId|qint32|
|invoice|[Invoice](invoice.md)|
|providerId|qint32|
|info|[PaymentRequestedInfo](paymentrequestedinfo.md)|
|shipping|[ShippingOption](shippingoption.md)|
|currency|QString|
|totalAmount|qint64|
|credentialsTitle|QString|
|users|QList&lt;[User](user.md)&gt;|

