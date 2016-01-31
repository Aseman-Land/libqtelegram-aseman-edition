# Photos.deletePhotos

## Function:

TelegramCore::photosDeletePhotos

## Schema:

`photos.deletePhotos#87cf7f2f id:Vector<InputPhoto> = Vector<long>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<InputPhoto>||
|callBack|Callback<QList<qint64>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<qint64>](../../types/qlist<qint64>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deletePhotosAnswer(qint64 msgId, const QList<qint64> & result)`
* `deletePhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeletePhotosAnswer(qint64 msgId, const QList<qint64> & result)`
* `onDeletePhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_PHOTOS_CALLBACK

## Examples:

`tg->deletePhotos(id, [=](TG_DELETE_PHOTOS_CALLBACK){
    ...
}, 30000);`
