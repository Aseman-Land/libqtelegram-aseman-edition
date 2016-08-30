# Photos.updateProfilePhoto

## Function:

TelegramCore::photosUpdateProfilePhoto

## Schema:

```c++
photos.updateProfilePhoto#eef579a0 id:InputPhoto crop:InputPhotoCrop = UserProfilePhoto;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputPhoto](../../types/inputphoto.md)||
|crop|[InputPhotoCrop](../../types/inputphotocrop.md)||
|callBack|Callback&lt;[UserProfilePhoto](../../types/userprofilephoto.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UserProfilePhoto](../../types/userprofilephoto.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
updateProfilePhotoAnswer(qint64 msgId, const UserProfilePhoto & result)
```
```c++
updateProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateProfilePhotoAnswer(qint64 msgId, const UserProfilePhoto & result)
```
```c++
onUpdateProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_PROFILE_PHOTO_CALLBACK

## Examples:

```c++
tg->updateProfilePhoto(id, crop, [=](TG_UPDATE_PROFILE_PHOTO_CALLBACK){
    ...
}, 30000);
```
