# Account.sendChangePhoneCode

## Function:

TelegramCore::accountSendChangePhoneCode

## Schema:

`account.sendChangePhoneCode#a407a8f4 phone_number:string = account.SentChangePhoneCode;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|callBack|Callback<AccountSentChangePhoneCode\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountSentChangePhoneCode](../../types/accountsentchangephonecode.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendChangePhoneCodeAnswer(qint64 msgId, const AccountSentChangePhoneCode & result)`
* `sendChangePhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendChangePhoneCodeAnswer(qint64 msgId, const AccountSentChangePhoneCode & result)`
* `onSendChangePhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_CHANGE_PHONE_CODE_CALLBACK

## Examples:

`tg->sendChangePhoneCode(phone_number, [=](TG_SEND_CHANGE_PHONE_CODE_CALLBACK){
    ...
}, 30000);`
