# Messages.editChatPhoto

## Function:

TelegramCore::messagesEditChatPhoto

## Schema:

```c++
messages.editChatPhoto#ca4c79d8 chat_id:int photo:InputChatPhoto = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
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
editChatPhotoAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editChatPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditChatPhotoAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditChatPhotoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_CHAT_PHOTO_CALLBACK

## Examples:

```c++
tg->editChatPhoto(chat_id, photo, [=](TG_EDIT_CHAT_PHOTO_CALLBACK){
    ...
}, 30000);
```
