# Account.sendConfirmPhoneCode

## Function:

TelegramCore::accountSendConfirmPhoneCode

## Schema:

```c++
account.sendConfirmPhoneCode#1516d7bd flags:# allow_flashcall:flags.0?true hash:string current_number:flags.0?Bool = auth.SentCode;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|allowFlashcall|bool||
|hash|QString||
|currentNumber|bool||
|callBack|Callback&lt;[AuthSentCode](../../types/authsentcode.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AuthSentCode](../../types/authsentcode.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendConfirmPhoneCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
sendConfirmPhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendConfirmPhoneCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
onSendConfirmPhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CONFIRM_PHONE_CODE_CALLBACK

## Examples:

```c++
tg->sendConfirmPhoneCode(allow_flashcall, hash, current_number, [=](TG_SEND_CONFIRM_PHONE_CODE_CALLBACK){
    ...
}, 30000);
```
