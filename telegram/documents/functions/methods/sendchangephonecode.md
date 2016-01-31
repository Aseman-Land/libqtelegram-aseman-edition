# Account.sendChangePhoneCode

## Function:

TelegramCore::accountSendChangePhoneCode

## Schema:

```c++
account.sendChangePhoneCode#a407a8f4 phone_number:string = account.SentChangePhoneCode;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|callBack|Callback&lt;[AccountSentChangePhoneCode](../../types/accountsentchangephonecode.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountSentChangePhoneCode](../../types/accountsentchangephonecode.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendChangePhoneCodeAnswer(qint64 msgId, const AccountSentChangePhoneCode & result)
```
```c++
sendChangePhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendChangePhoneCodeAnswer(qint64 msgId, const AccountSentChangePhoneCode & result)
```
```c++
onSendChangePhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CHANGE_PHONE_CODE_CALLBACK

## Examples:

```c++
tg->sendChangePhoneCode(phone_number, [=](TG_SEND_CHANGE_PHONE_CODE_CALLBACK){
    ...
}, 30000);
```
