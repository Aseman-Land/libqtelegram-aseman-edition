# Messages.deleteChatUser

## Function:

TelegramCore::messagesDeleteChatUser

## Schema:

`messages.deleteChatUser#e0611f16 chat_id:int user_id:InputUser = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteChatUserAnswer(qint64 msgId, const UpdatesType & result)`
* `deleteChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteChatUserAnswer(qint64 msgId, const UpdatesType & result)`
* `onDeleteChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_CHAT_USER_CALLBACK

## Examples:

`tg->deleteChatUser(chat_id, user_id, [=](TG_DELETE_CHAT_USER_CALLBACK){
    ...
}, 30000);`
