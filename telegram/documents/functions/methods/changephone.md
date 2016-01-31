# Account.changePhone

## Function:

TelegramCore::accountChangePhone

## Schema:

```c++
account.changePhone#70c32edb phone_number:string phone_code_hash:string phone_code:string = User;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|phoneCode|QString||
|callBack|Callback&lt;[User](../../types/user.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
changePhoneAnswer(qint64 msgId, const User & result)
```
```c++
changePhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onChangePhoneAnswer(qint64 msgId, const User & result)
```
```c++
onChangePhoneError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CHANGE_PHONE_CALLBACK

## Examples:

```c++
tg->changePhone(phone_number, phone_code_hash, phone_code, [=](TG_CHANGE_PHONE_CALLBACK){
    ...
}, 30000);
```
