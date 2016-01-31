# Account.updateStatus

## Function:

TelegramCore::accountUpdateStatus

## Schema:

`account.updateStatus#6628562c offline:Bool = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|offline|bool||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updateStatusAnswer(qint64 msgId, bool  result)`
* `updateStatusError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdateStatusAnswer(qint64 msgId, bool  result)`
* `onUpdateStatusError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_STATUS_CALLBACK

## Examples:

`tg->updateStatus(offline, [=](TG_UPDATE_STATUS_CALLBACK){
    ...
}, 30000);`
