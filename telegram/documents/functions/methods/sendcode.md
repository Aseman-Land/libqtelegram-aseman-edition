# Auth.sendCode

## Function:

TelegramCore::authSendCode

## Schema:

```c++
auth.sendCode#ccfd70cf flags:# allow_flashcall:flags.0?true phone_number:string current_number:flags.0?Bool api_id:int api_hash:string lang_code:string = auth.SentCode;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|allowFlashcall|bool||
|phoneNumber|QString||
|currentNumber|bool||
|apiId|qint32||
|apiHash|QString||
|langCode|QString||
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
sendCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
sendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendCodeAnswer(qint64 msgId, const AuthSentCode & result)
```
```c++
onSendCodeError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_CODE_CALLBACK

## Examples:

```c++
tg->sendCode(allow_flashcall, phone_number, current_number, api_id, api_hash, lang_code, [=](TG_SEND_CODE_CALLBACK){
    ...
}, 30000);
```
