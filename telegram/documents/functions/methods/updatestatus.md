# Account.updateStatus

## Function:

TelegramCore::accountUpdateStatus

## Schema:

```c++
account.updateStatus#6628562c offline:Bool = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|offline|bool||
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
updateStatusAnswer(qint64 msgId, bool  result)
```
```c++
updateStatusError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateStatusAnswer(qint64 msgId, bool  result)
```
```c++
onUpdateStatusError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_STATUS_CALLBACK

## Examples:

```c++
tg->updateStatus(offline, [=](TG_UPDATE_STATUS_CALLBACK){
    ...
}, 30000);
```
