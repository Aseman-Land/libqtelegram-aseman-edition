# Messages.addChatUser

## Function:

TelegramCore::messagesAddChatUser

## Schema:

`messages.addChatUser#f9a0aa09 chat_id:int user_id:InputUser fwd_limit:int = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|fwdLimit|qint32||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `addChatUserAnswer(qint64 msgId, const UpdatesType & result)`
* `addChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onAddChatUserAnswer(qint64 msgId, const UpdatesType & result)`
* `onAddChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_ADD_CHAT_USER_CALLBACK

## Examples:

`tg->addChatUser(chat_id, user_id, fwd_limit, [=](TG_ADD_CHAT_USER_CALLBACK){
    ...
}, 30000);`
