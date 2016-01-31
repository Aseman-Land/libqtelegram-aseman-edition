# Auth.sendCall

## Function:

TelegramCore::authSendCall

## Schema:

`auth.sendCall#3c51564 phone_number:string phone_code_hash:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumber|QString||
|phoneCodeHash|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendCallAnswer(qint64 msgId, bool  result)`
* `sendCallError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendCallAnswer(qint64 msgId, bool  result)`
* `onSendCallError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_CALL_CALLBACK

## Examples:

`tg->sendCall(phone_number, phone_code_hash, [=](TG_SEND_CALL_CALLBACK){
    ...
}, 30000);`
