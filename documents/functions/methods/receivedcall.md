# Phone.receivedCall

## Function:

TelegramCore::phoneReceivedCall

## Schema:

```c++
phone.receivedCall#17d54f61 peer:InputPhoneCall = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPhoneCall](../../types/inputphonecall.md)||
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
receivedCallAnswer(qint64 msgId, bool  result)
```
```c++
receivedCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReceivedCallAnswer(qint64 msgId, bool  result)
```
```c++
onReceivedCallError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RECEIVED_CALL_CALLBACK

## Examples:

```c++
tg->receivedCall(peer, [=](TG_RECEIVED_CALL_CALLBACK){
    ...
}, 30000);
```
