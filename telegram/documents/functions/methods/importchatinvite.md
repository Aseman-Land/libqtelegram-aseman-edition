# Messages.importChatInvite

## Function:

TelegramCore::messagesImportChatInvite

## Schema:

`messages.importChatInvite#6c50051c hash:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `importChatInviteAnswer(qint64 msgId, const UpdatesType & result)`
* `importChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onImportChatInviteAnswer(qint64 msgId, const UpdatesType & result)`
* `onImportChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_IMPORT_CHAT_INVITE_CALLBACK

## Examples:

`tg->importChatInvite(hash, [=](TG_IMPORT_CHAT_INVITE_CALLBACK){
    ...
}, 30000);`
