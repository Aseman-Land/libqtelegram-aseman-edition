# Auth.sendCode

## Function:

TelegramCore::authSendCode

## Schema:

`auth.sendCode#768d5f4d phone_number:string sms_type:int api_id:int api_hash:string lang_code:string = auth.SentCode;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|smsType|qint32||
|apiId|qint32||
|apiHash|QString||
|langCode|QString||
|callBack|Callback<AuthSentCode\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthSentCode](../../types/authsentcode.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendCodeAnswer(qint64 msgId, const AuthSentCode & result)`
* `sendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendCodeAnswer(qint64 msgId, const AuthSentCode & result)`
* `onSendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_CODE_CALLBACK

## Examples:

`tg->sendCode(phone_number, sms_type, api_id, api_hash, lang_code, [=](TG_SEND_CODE_CALLBACK){
    ...
}, 30000);`
