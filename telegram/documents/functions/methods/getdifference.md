# Updates.getDifference

## Function:

TelegramCore::updatesGetDifference

## Schema:

`updates.getDifference#a041495 pts:int date:int qts:int = updates.Difference;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|pts|qint32||
|date|qint32||
|qts|qint32||
|callBack|Callback<UpdatesDifference\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesDifference](../../types/updatesdifference.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getDifferenceAnswer(qint64 msgId, const UpdatesDifference & result)`
* `getDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetDifferenceAnswer(qint64 msgId, const UpdatesDifference & result)`
* `onGetDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_DIFFERENCE_CALLBACK

## Examples:

`tg->getDifference(pts, date, qts, [=](TG_GET_DIFFERENCE_CALLBACK){
    ...
}, 30000);`
