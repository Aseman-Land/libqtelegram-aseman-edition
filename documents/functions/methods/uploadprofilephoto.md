# Photos.uploadProfilePhoto

## Function:

TelegramCore::photosUploadProfilePhoto

## Schema:

```c++
photos.uploadProfilePhoto#4f32c098 file:InputFile = photos.Photo;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|file|[InputFile](../../types/inputfile.md)||
|callBack|Callback&lt;[PhotosPhoto](../../types/photosphoto.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PhotosPhoto](../../types/photosphoto.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
uploadProfilePhotoAnswer(qint64 msgId, const PhotosPhoto & result)
```
```c++
uploadProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUploadProfilePhotoAnswer(qint64 msgId, const PhotosPhoto & result)
```
```c++
onUploadProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPLOAD_PROFILE_PHOTO_CALLBACK

## Examples:

```c++
tg->uploadProfilePhoto(file, [=](TG_UPLOAD_PROFILE_PHOTO_CALLBACK){
    ...
}, 30000);
```
