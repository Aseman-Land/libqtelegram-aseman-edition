# Phone.acceptCall

## Function:

TelegramCore::phoneAcceptCall

## Schema:

```c++
phone.acceptCall#3bd2b4a0 peer:InputPhoneCall g_b:bytes protocol:PhoneCallProtocol = phone.PhoneCall;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPhoneCall](../../types/inputphonecall.md)||
|gB|QByteArray||
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
acceptCallAnswer(qint64 msgId, const PhonePhoneCall & result)
```
```c++
acceptCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onAcceptCallAnswer(qint64 msgId, const PhonePhoneCall & result)
```
```c++
onAcceptCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_ACCEPT_CALL_CALLBACK

## Examples:

```c++
tg->acceptCall(peer, g_b, protocol, [=](TG_ACCEPT_CALL_CALLBACK){
    ...
}, 30000);
```
