# Messages.editChatPhoto

## Function:

TelegramCore::messagesEditChatPhoto

## Schema:

`messages.editChatPhoto#ca4c79d8 chat_id:int photo:InputChatPhoto = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
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

* `editChatPhotoAnswer(qint64 msgId, const UpdatesType & result)`
* `editChatPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditChatPhotoAnswer(qint64 msgId, const UpdatesType & result)`
* `onEditChatPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_CHAT_PHOTO_CALLBACK

## Examples:

`tg->editChatPhoto(chat_id, photo, [=](TG_EDIT_CHAT_PHOTO_CALLBACK){
    ...
}, 30000);`
