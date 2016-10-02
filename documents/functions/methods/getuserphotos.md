# Photos.getUserPhotos

## Function:

TelegramCore::photosGetUserPhotos

## Schema:

```c++
photos.getUserPhotos#91cd32a8 user_id:InputUser offset:int max_id:long limit:int = photos.Photos;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|userId|[InputUser](../../types/inputuser.md)||
|offset|qint32||
|maxId|qint64||
|limit|qint32||
|callBack|Callback&lt;[PhotosPhotos](../../types/photosphotos.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PhotosPhotos](../../types/photosphotos.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getUserPhotosAnswer(qint64 msgId, const PhotosPhotos & result)
```
```c++
getUserPhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetUserPhotosAnswer(qint64 msgId, const PhotosPhotos & result)
```
```c++
onGetUserPhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_USER_PHOTOS_CALLBACK

## Examples:

```c++
tg->getUserPhotos(user_id, offset, max_id, limit, [=](TG_GET_USER_PHOTOS_CALLBACK){
    ...
}, 30000);
```
