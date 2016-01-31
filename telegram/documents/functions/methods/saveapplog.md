# Help.saveAppLog

## Function:

TelegramCore::helpSaveAppLog

## Schema:

`help.saveAppLog#6f02f748 events:Vector<InputAppEvent> = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|events|QList<InputAppEvent>||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `saveAppLogAnswer(qint64 msgId, bool  result)`
* `saveAppLogError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSaveAppLogAnswer(qint64 msgId, bool  result)`
* `onSaveAppLogError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SAVE_APP_LOG_CALLBACK

## Examples:

`tg->saveAppLog(events, [=](TG_SAVE_APP_LOG_CALLBACK){
    ...
}, 30000);`
