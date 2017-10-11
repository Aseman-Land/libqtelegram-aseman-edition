# Phone.requestCall

## Function:

TelegramCore::phoneRequestCall

## Schema:

```c++
phone.requestCall#5b95b3d4 user_id:InputUser random_id:int g_a_hash:bytes protocol:PhoneCallProtocol = phone.PhoneCall;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|userId|[InputUser](../../types/inputuser.md)||
|randomId|qint32||
|gAHash|QByteArray||
|protocol|[PhoneCallProtocol](../../types/phonecallprotocol.md)||
|callBack|Callback&lt;[PhonePhoneCall](../../types/phonephonecall.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PhonePhoneCall](../../types/phonephonecall.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
requestCallAnswer(qint64 msgId, const PhonePhoneCall & result)
```
```c++
requestCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onRequestCallAnswer(qint64 msgId, const PhonePhoneCall & result)
```
```c++
onRequestCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REQUEST_CALL_CALLBACK

## Examples:

```c++
tg->requestCall(user_id, random_id, g_a_hash, protocol, [=](TG_REQUEST_CALL_CALLBACK){
    ...
}, 30000);
```
