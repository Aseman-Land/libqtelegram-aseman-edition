# AccountPassword

## Types

* [typeAccountNoPassword](#accountpasswordtypeaccountnopassword)
* [typeAccountPassword](#accountpasswordtypeaccountpassword)

## AccountPassword::typeAccountNoPassword

#### Schema:

```c++
account.noPassword#96dabc18 new_salt:bytes email_unconfirmed_pattern:string = account.Password;
```

#### Parameters:

|Name|Type|
|----|----|
|newSalt|QByteArray|
|emailUnconfirmedPattern|QString|

## AccountPassword::typeAccountPassword

#### Schema:

```c++
account.password#7c18141c current_salt:bytes new_salt:bytes hint:string has_recovery:Bool email_unconfirmed_pattern:string = account.Password;
```

#### Parameters:

|Name|Type|
|----|----|
|currentSalt|QByteArray|
|newSalt|QByteArray|
|hint|QString|
|hasRecovery|bool|
|emailUnconfirmedPattern|QString|

