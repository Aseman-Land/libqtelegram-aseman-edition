# Photos.getUserPhotos

## Function:

TelegramCore::photosGetUserPhotos

## Schema:

`photos.getUserPhotos#91cd32a8 user_id:InputUser offset:int max_id:long limit:int = photos.Photos;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|userId|[InputUser](../../types/inputuser.md)||
|offset|qint32||
|maxId|qint64||
|limit|qint32||
|callBack|Callback<PhotosPhotos\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[PhotosPhotos](../../types/photosphotos.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getUserPhotosAnswer(qint64 msgId, const PhotosPhotos & result)`
* `getUserPhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetUserPhotosAnswer(qint64 msgId, const PhotosPhotos & result)`
* `onGetUserPhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_USER_PHOTOS_CALLBACK

## Examples:

`tg->getUserPhotos(user_id, offset, max_id, limit, [=](TG_GET_USER_PHOTOS_CALLBACK){
    ...
}, 30000);`
