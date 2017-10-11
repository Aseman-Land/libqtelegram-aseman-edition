# Phone.saveCallDebug

## Function:

TelegramCore::phoneSaveCallDebug

## Schema:

```c++
phone.saveCallDebug#277add7e peer:InputPhoneCall debug:DataJSON = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPhoneCall](../../types/inputphonecall.md)||
|debug|[DataJSON](../../types/datajson.md)||
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
saveCallDebugAnswer(qint64 msgId, bool  result)
```
```c++
saveCallDebugError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveCallDebugAnswer(qint64 msgId, bool  result)
```
```c++
onSaveCallDebugError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_CALL_DEBUG_CALLBACK

## Examples:

```c++
tg->saveCallDebug(peer, debug, [=](TG_SAVE_CALL_DEBUG_CALLBACK){
    ...
}, 30000);
```
