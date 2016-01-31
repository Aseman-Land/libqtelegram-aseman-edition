# Auth.checkPhone

## Function:

TelegramCore::authCheckPhone

## Schema:

`auth.checkPhone#6fe51dfb phone_number:string = auth.CheckedPhone;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|callBack|Callback<AuthCheckedPhone\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AuthCheckedPhone](../../types/authcheckedphone.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `checkPhoneAnswer(qint64 msgId, const AuthCheckedPhone & result)`
* `checkPhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onCheckPhoneAnswer(qint64 msgId, const AuthCheckedPhone & result)`
* `onCheckPhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CHECK_PHONE_CALLBACK

## Examples:

`tg->checkPhone(phone_number, [=](TG_CHECK_PHONE_CALLBACK){
    ...
}, 30000);`
