# Photos.uploadProfilePhoto

## Function:

TelegramCore::photosUploadProfilePhoto

## Schema:

`photos.uploadProfilePhoto#d50f9c88 file:InputFile caption:string geo_point:InputGeoPoint crop:InputPhotoCrop = photos.Photo;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|file|[InputFile](../../types/inputfile.md)||
|caption|QString||
|geoPoint|[InputGeoPoint](../../types/inputgeopoint.md)||
|crop|[InputPhotoCrop](../../types/inputphotocrop.md)||
|callBack|Callback<PhotosPhoto\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[PhotosPhoto](../../types/photosphoto.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `uploadProfilePhotoAnswer(qint64 msgId, const PhotosPhoto & result)`
* `uploadProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUploadProfilePhotoAnswer(qint64 msgId, const PhotosPhoto & result)`
* `onUploadProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPLOAD_PROFILE_PHOTO_CALLBACK

## Examples:

`tg->uploadProfilePhoto(file, caption, geo_point, crop, [=](TG_UPLOAD_PROFILE_PHOTO_CALLBACK){
    ...
}, 30000);`
