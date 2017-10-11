# Invoice

## Types

* [typeInvoice](#invoicetypeinvoice)

## Invoice::typeInvoice

#### Schema:

```c++
invoice#c30aa358 flags:# test:flags.0?true name_requested:flags.1?true phone_requested:flags.2?true email_requested:flags.3?true shipping_address_requested:flags.4?true flexible:flags.5?true currency:string prices:Vector<LabeledPrice> = Invoice;
```

#### Parameters:

|Name|Type|
|----|----|
|test|bool|
|nameRequested|bool|
|phoneRequested|bool|
|emailRequested|bool|
|shippingAddressRequested|bool|
|flexible|bool|
|currency|QString|
|prices|QList&lt;[LabeledPrice](labeledprice.md)&gt;|

