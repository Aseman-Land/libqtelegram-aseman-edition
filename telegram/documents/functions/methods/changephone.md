# Account.changePhone

## Function:

TelegramCore::accountChangePhone

## Schema:

`account.changePhone#70c32edb phone_number:string phone_code_hash:string phone_code:string = User;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|phoneCode|QString||
|callBack|Callback<User\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `changePhoneAnswer(qint64 msgId, const User & result)`
* `changePhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onChangePhoneAnswer(qint64 msgId, const User & result)`
* `onChangePhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CHANGE_PHONE_CALLBACK

## Examples:

`tg->changePhone(phone_number, phone_code_hash, phone_code, [=](TG_CHANGE_PHONE_CALLBACK){
    ...
}, 30000);`
