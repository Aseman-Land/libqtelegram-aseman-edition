# Channels.editPhoto

## Function:

TelegramCore::channelsEditPhoto

## Schema:

`channels.editPhoto#f12e57c9 channel:InputChannel photo:InputChatPhoto = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|photo|[InputChatPhoto](../../types/inputchatphoto.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `editPhotoAnswer(qint64 msgId, const UpdatesType & result)`
* `editPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditPhotoAnswer(qint64 msgId, const UpdatesType & result)`
* `onEditPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_PHOTO_CALLBACK

## Examples:

`tg->editPhoto(channel, photo, [=](TG_EDIT_PHOTO_CALLBACK){
    ...
}, 30000);`
