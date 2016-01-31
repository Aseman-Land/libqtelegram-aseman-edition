# Messages.exportChatInvite

## Function:

TelegramCore::messagesExportChatInvite

## Schema:

`messages.exportChatInvite#7d885289 chat_id:int = ExportedChatInvite;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|callBack|Callback<ExportedChatInvite\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ExportedChatInvite](../../types/exportedchatinvite.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `exportChatInviteAnswer(qint64 msgId, const ExportedChatInvite & result)`
* `exportChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onExportChatInviteAnswer(qint64 msgId, const ExportedChatInvite & result)`
* `onExportChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EXPORT_CHAT_INVITE_CALLBACK

## Examples:

`tg->exportChatInvite(chat_id, [=](TG_EXPORT_CHAT_INVITE_CALLBACK){
    ...
}, 30000);`
