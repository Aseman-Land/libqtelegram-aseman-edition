# PaymentsPaymentForm

## Types

* [typePaymentsPaymentForm](#paymentspaymentformtypepaymentspaymentform)

## PaymentsPaymentForm::typePaymentsPaymentForm

#### Schema:

```c++
payments.paymentForm#3f56aea3 flags:# can_save_credentials:flags.2?true password_missing:flags.3?true bot_id:int invoice:Invoice provider_id:int url:string native_provider:flags.4?string native_params:flags.4?DataJSON saved_info:flags.0?PaymentRequestedInfo saved_credentials:flags.1?PaymentSavedCredentials users:Vector<User> = payments.PaymentForm;
```

#### Parameters:

|Name|Type|
|----|----|
|canSaveCredentials|bool|
|passwordMissing|bool|
|botId|qint32|
|invoice|[Invoice](invoice.md)|
|providerId|qint32|
|url|QString|
|nativeProvider|QString|
|nativeParams|[DataJSON](datajson.md)|
|savedInfo|[PaymentRequestedInfo](paymentrequestedinfo.md)|
|savedCredentials|[PaymentSavedCredentials](paymentsavedcredentials.md)|
|users|QList&lt;[User](user.md)&gt;|

