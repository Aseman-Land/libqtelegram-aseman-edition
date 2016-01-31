# Photos.updateProfilePhoto

## Function:

TelegramCore::photosUpdateProfilePhoto

## Schema:

`photos.updateProfilePhoto#eef579a0 id:InputPhoto crop:InputPhotoCrop = UserProfilePhoto;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputPhoto](../../types/inputphoto.md)||
|crop|[InputPhotoCrop](../../types/inputphotocrop.md)||
|callBack|Callback<UserProfilePhoto\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UserProfilePhoto](../../types/userprofilephoto.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updateProfilePhotoAnswer(qint64 msgId, const UserProfilePhoto & result)`
* `updateProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdateProfilePhotoAnswer(qint64 msgId, const UserProfilePhoto & result)`
* `onUpdateProfilePhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_PROFILE_PHOTO_CALLBACK

## Examples:

`tg->updateProfilePhoto(id, crop, [=](TG_UPDATE_PROFILE_PHOTO_CALLBACK){
    ...
}, 30000);`
