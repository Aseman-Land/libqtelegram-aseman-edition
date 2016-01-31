# Channels.editPhoto

## Function:

TelegramCore::channelsEditPhoto

## Schema:

```c++
channels.editPhoto#f12e57c9 channel:InputChannel photo:InputChatPhoto = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|photo|[InputChatPhoto](../../types/inputchatphoto.md)||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
editPhotoAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditPhotoAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_PHOTO_CALLBACK

## Examples:

```c++
tg->editPhoto(channel, photo, [=](TG_EDIT_PHOTO_CALLBACK){
    ...
}, 30000);
```
