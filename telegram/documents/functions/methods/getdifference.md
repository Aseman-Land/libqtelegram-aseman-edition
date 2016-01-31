# Updates.getDifference

## Function:

TelegramCore::updatesGetDifference

## Schema:

```c++
updates.getDifference#a041495 pts:int date:int qts:int = updates.Difference;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|pts|qint32||
|date|qint32||
|qts|qint32||
|callBack|Callback&lt;[UpdatesDifference](../../types/updatesdifference.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesDifference](../../types/updatesdifference.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getDifferenceAnswer(qint64 msgId, const UpdatesDifference & result)
```
```c++
getDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetDifferenceAnswer(qint64 msgId, const UpdatesDifference & result)
```
```c++
onGetDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_DIFFERENCE_CALLBACK

## Examples:

```c++
tg->getDifference(pts, date, qts, [=](TG_GET_DIFFERENCE_CALLBACK){
    ...
}, 30000);
```
