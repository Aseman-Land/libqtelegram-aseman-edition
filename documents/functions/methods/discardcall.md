# Phone.discardCall

## Function:

TelegramCore::phoneDiscardCall

## Schema:

```c++
phone.discardCall#78d413a6 peer:InputPhoneCall duration:int reason:PhoneCallDiscardReason connection_id:long = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPhoneCall](../../types/inputphonecall.md)||
|duration|qint32||
|reason|[PhoneCallDiscardReason](../../types/phonecalldiscardreason.md)||
|connectionId|qint64||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
discardCallAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
discardCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDiscardCallAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onDiscardCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DISCARD_CALL_CALLBACK

## Examples:

```c++
tg->discardCall(peer, duration, reason, connection_id, [=](TG_DISCARD_CALL_CALLBACK){
    ...
}, 30000);
```
