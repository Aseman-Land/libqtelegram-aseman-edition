# Help.saveAppLog

## Function:

TelegramCore::helpSaveAppLog

## Schema:

```c++
help.saveAppLog#6f02f748 events:Vector<InputAppEvent> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|events|QList&lt;[InputAppEvent](../../types/inputappevent.md)&gt;||
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
saveAppLogAnswer(qint64 msgId, bool  result)
```
```c++
saveAppLogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveAppLogAnswer(qint64 msgId, bool  result)
```
```c++
onSaveAppLogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_APP_LOG_CALLBACK

## Examples:

```c++
tg->saveAppLog(events, [=](TG_SAVE_APP_LOG_CALLBACK){
    ...
}, 30000);
```
