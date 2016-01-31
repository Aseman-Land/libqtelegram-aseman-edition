# AuthSentCode

## Types

* typeAuthSentCode
* typeAuthSentAppCode

## AuthSentCode::typeAuthSentCode

#### Schema:

`auth.sentCode#efed51d9 phone_registered:Bool phone_code_hash:string send_call_timeout:int is_password:Bool = auth.SentCode;`

#### Parameters:

|Name|Type|
|----|----|
|phoneRegistered|bool|
|phoneCodeHash|QString|
|sendCallTimeout|qint32|
|isPassword|bool|

## AuthSentCode::typeAuthSentAppCode

#### Schema:

`auth.sentAppCode#e325edcf phone_registered:Bool phone_code_hash:string send_call_timeout:int is_password:Bool = auth.SentCode;`

#### Parameters:

|Name|Type|
|----|----|
|phoneRegistered|bool|
|phoneCodeHash|QString|
|sendCallTimeout|qint32|
|isPassword|bool|

