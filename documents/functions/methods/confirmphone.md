# Account.confirmPhone

## Function:

TelegramCore::accountConfirmPhone

## Schema:

```c++
account.confirmPhone#5f2178c3 phone_code_hash:string phone_code:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneCodeHash|QString||
|phoneCode|QString||
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
confirmPhoneAnswer(qint64 msgId, bool  result)
```
```c++
confirmPhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onConfirmPhoneAnswer(qint64 msgId, bool  result)
```
```c++
onConfirmPhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CONFIRM_PHONE_CALLBACK

## Examples:

```c++
tg->confirmPhone(phone_code_hash, phone_code, [=](TG_CONFIRM_PHONE_CALLBACK){
    ...
}, 30000);
```
