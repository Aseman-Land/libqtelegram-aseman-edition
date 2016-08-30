# Account.sendChangePhoneCode

## Function:

TelegramCore::accountSendChangePhoneCode

## Schema:

```c++
account.sendChangePhoneCode#8e57deb flags:# allow_flashcall:flags.0?true phone_number:string current_number:flags.0?Bool = auth.SentCode;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|allowFlashcall|bool||
|phoneNumber|QString||
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
sendChangePhoneCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
sendChangePhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendChangePhoneCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
onSendChangePhoneCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CHANGE_PHONE_CODE_CALLBACK

## Examples:

```c++
tg->sendChangePhoneCode(allow_flashcall, phone_number, current_number, [=](TG_SEND_CHANGE_PHONE_CODE_CALLBACK){
    ...
}, 30000);
```
