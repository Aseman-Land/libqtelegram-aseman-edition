# InputPaymentCredentials

## Types

* [typeInputPaymentCredentialsSaved](#inputpaymentcredentialstypeinputpaymentcredentialssaved)
* [typeInputPaymentCredentials](#inputpaymentcredentialstypeinputpaymentcredentials)

## InputPaymentCredentials::typeInputPaymentCredentialsSaved

#### Schema:

```c++
inputPaymentCredentialsSaved#c10eb2cf id:string tmp_password:bytes = InputPaymentCredentials;
```

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|tmpPassword|QByteArray|

## InputPaymentCredentials::typeInputPaymentCredentials

#### Schema:

```c++
inputPaymentCredentials#3417d728 flags:# save:flags.0?true data:DataJSON = InputPaymentCredentials;
```

#### Parameters:

|Name|Type|
|----|----|
|save|bool|
|data|[DataJSON](datajson.md)|

