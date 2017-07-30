# Help.setBotUpdatesStatus

## Function:

TelegramCore::helpSetBotUpdatesStatus

## Schema:

```c++
help.setBotUpdatesStatus#ec22cfcd pending_updates_count:int message:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|pendingUpdatesCount|qint32||
|message|QString||
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
setBotUpdatesStatusAnswer(qint64 msgId, bool  result)
```
```c++
setBotUpdatesStatusError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetBotUpdatesStatusAnswer(qint64 msgId, bool  result)
```
```c++
onSetBotUpdatesStatusError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_BOT_UPDATES_STATUS_CALLBACK

## Examples:

```c++
tg->setBotUpdatesStatus(pending_updates_count, message, [=](TG_SET_BOT_UPDATES_STATUS_CALLBACK){
    ...
}, 30000);
```
