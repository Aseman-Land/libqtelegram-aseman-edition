# Messages.editChatAdmin

## Function:

TelegramCore::messagesEditChatAdmin

## Schema:

`messages.editChatAdmin#a9e69f2e chat_id:int user_id:InputUser is_admin:Bool = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|isAdmin|bool||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `editChatAdminAnswer(qint64 msgId, bool  result)`
* `editChatAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditChatAdminAnswer(qint64 msgId, bool  result)`
* `onEditChatAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_CHAT_ADMIN_CALLBACK

## Examples:

`tg->editChatAdmin(chat_id, user_id, is_admin, [=](TG_EDIT_CHAT_ADMIN_CALLBACK){
    ...
}, 30000);`
