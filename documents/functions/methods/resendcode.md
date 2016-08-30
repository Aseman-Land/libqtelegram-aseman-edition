# Auth.resendCode

## Function:

TelegramCore::authResendCode

## Schema:

```c++
auth.resendCode#3ef1a9bf phone_number:string phone_code_hash:string = auth.SentCode;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
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
resendCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
resendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResendCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
onResendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESEND_CODE_CALLBACK

## Examples:

```c++
tg->resendCode(phone_number, phone_code_hash, [=](TG_RESEND_CODE_CALLBACK){
    ...
}, 30000);
```
