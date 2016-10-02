# Auth.cancelCode

## Function:

TelegramCore::authCancelCode

## Schema:

```c++
auth.cancelCode#1f040578 phone_number:string phone_code_hash:string = Bool;
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
cancelCodeAnswer(qint64 msgId, bool  result)
```
```c++
cancelCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCancelCodeAnswer(qint64 msgId, bool  result)
```
```c++
onCancelCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CANCEL_CODE_CALLBACK

## Examples:

```c++
tg->cancelCode(phone_number, phone_code_hash, [=](TG_CANCEL_CODE_CALLBACK){
    ...
}, 30000);
```
