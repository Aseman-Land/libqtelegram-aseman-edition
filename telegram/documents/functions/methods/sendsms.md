# Auth.sendSms

## Function:

TelegramCore::authSendSms

## Schema:

```c++
auth.sendSms#da9f3e8 phone_number:string phone_code_hash:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendSmsAnswer(qint64 msgId, bool  result)
```
```c++
sendSmsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendSmsAnswer(qint64 msgId, bool  result)
```
```c++
onSendSmsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_SMS_CALLBACK

## Examples:

```c++
tg->sendSms(phone_number, phone_code_hash, [=](TG_SEND_SMS_CALLBACK){
    ...
}, 30000);
```
