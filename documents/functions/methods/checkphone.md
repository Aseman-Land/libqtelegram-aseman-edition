# Auth.checkPhone

## Function:

TelegramCore::authCheckPhone

## Schema:

```c++
auth.checkPhone#6fe51dfb phone_number:string = auth.CheckedPhone;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|callBack|Callback&lt;[AuthCheckedPhone](../../types/authcheckedphone.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AuthCheckedPhone](../../types/authcheckedphone.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
checkPhoneAnswer(qint64 msgId, const AuthCheckedPhone & result)
```
```c++
checkPhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCheckPhoneAnswer(qint64 msgId, const AuthCheckedPhone & result)
```
```c++
onCheckPhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CHECK_PHONE_CALLBACK

## Examples:

```c++
tg->checkPhone(phone_number, [=](TG_CHECK_PHONE_CALLBACK){
    ...
}, 30000);
```
