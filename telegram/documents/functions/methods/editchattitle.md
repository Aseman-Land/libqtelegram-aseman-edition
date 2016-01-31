# Messages.editChatTitle

## Function:

TelegramCore::messagesEditChatTitle

## Schema:

`messages.editChatTitle#dc452855 chat_id:int title:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|title|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `editChatTitleAnswer(qint64 msgId, const UpdatesType & result)`
* `editChatTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditChatTitleAnswer(qint64 msgId, const UpdatesType & result)`
* `onEditChatTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_CHAT_TITLE_CALLBACK

## Examples:

`tg->editChatTitle(chat_id, title, [=](TG_EDIT_CHAT_TITLE_CALLBACK){
    ...
}, 30000);`
