# Auth.sendSms

## Function:

TelegramCore::authSendSms

## Schema:

`auth.sendSms#da9f3e8 phone_number:string phone_code_hash:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendSmsAnswer(qint64 msgId, bool  result)`
* `sendSmsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendSmsAnswer(qint64 msgId, bool  result)`
* `onSendSmsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_SMS_CALLBACK

## Examples:

`tg->sendSms(phone_number, phone_code_hash, [=](TG_SEND_SMS_CALLBACK){
    ...
}, 30000);`
