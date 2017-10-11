# Phone.confirmCall

## Function:

TelegramCore::phoneConfirmCall

## Schema:

```c++
phone.confirmCall#2efe1722 peer:InputPhoneCall g_a:bytes key_fingerprint:long protocol:PhoneCallProtocol = phone.PhoneCall;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPhoneCall](../../types/inputphonecall.md)||
|gA|QByteArray||
|keyFingerprint|qint64||
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
confirmCallAnswer(qint64 msgId, const PhonePhoneCall & result)
```
```c++
confirmCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onConfirmCallAnswer(qint64 msgId, const PhonePhoneCall & result)
```
```c++
onConfirmCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CONFIRM_CALL_CALLBACK

## Examples:

```c++
tg->confirmCall(peer, g_a, key_fingerprint, protocol, [=](TG_CONFIRM_CALL_CALLBACK){
    ...
}, 30000);
```
