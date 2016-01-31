# Auth.sendCall

## Function:

TelegramCore::authSendCall

## Schema:

```c++
auth.sendCall#3c51564 phone_number:string phone_code_hash:string = Bool;
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
sendCallAnswer(qint64 msgId, bool  result)
```
```c++
sendCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendCallAnswer(qint64 msgId, bool  result)
```
```c++
onSendCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CALL_CALLBACK

## Examples:

```c++
tg->sendCall(phone_number, phone_code_hash, [=](TG_SEND_CALL_CALLBACK){
    ...
}, 30000);
```
