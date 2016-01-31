# Auth.sendCode

## Function:

TelegramCore::authSendCode

## Schema:

```c++
auth.sendCode#768d5f4d phone_number:string sms_type:int api_id:int api_hash:string lang_code:string = auth.SentCode;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|smsType|qint32||
|apiId|qint32||
|apiHash|QString||
|langCode|QString||
|callBack|Callback&lt;[AuthSentCode](../../types/authsentcode.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AuthSentCode](../../types/authsentcode.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
sendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
onSendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CODE_CALLBACK

## Examples:

```c++
tg->sendCode(phone_number, sms_type, api_id, api_hash, lang_code, [=](TG_SEND_CODE_CALLBACK){
    ...
}, 30000);
```
