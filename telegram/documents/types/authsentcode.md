# AuthSentCode

## Types

* [typeAuthSentCode](#authsentcodetypeauthsentcode)

## AuthSentCode::typeAuthSentCode

#### Schema:

```c++
auth.sentCode#5e002502 flags:# phone_registered:flags.0?true type:auth.SentCodeType phone_code_hash:string next_type:flags.1?auth.CodeType timeout:flags.2?int = auth.SentCode;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneRegistered|bool|
|type|[AuthSentCodeType](authsentcodetype.md)|
|phoneCodeHash|QString|
|nextType|[AuthCodeType](authcodetype.md)|
|timeout|qint32|

