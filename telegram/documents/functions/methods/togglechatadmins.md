# Messages.toggleChatAdmins

## Function:

TelegramCore::messagesToggleChatAdmins

## Schema:

`messages.toggleChatAdmins#ec8bd9e1 chat_id:int enabled:Bool = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|enabled|bool||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `toggleChatAdminsAnswer(qint64 msgId, const UpdatesType & result)`
* `toggleChatAdminsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onToggleChatAdminsAnswer(qint64 msgId, const UpdatesType & result)`
* `onToggleChatAdminsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_TOGGLE_CHAT_ADMINS_CALLBACK

## Examples:

`tg->toggleChatAdmins(chat_id, enabled, [=](TG_TOGGLE_CHAT_ADMINS_CALLBACK){
    ...
}, 30000);`
