# Channels.exportInvite

## Function:

TelegramCore::channelsExportInvite

## Schema:

`channels.exportInvite#c7560885 channel:InputChannel = ExportedChatInvite;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|callBack|Callback<ExportedChatInvite\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ExportedChatInvite](../../types/exportedchatinvite.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `exportInviteAnswer(qint64 msgId, const ExportedChatInvite & result)`
* `exportInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onExportInviteAnswer(qint64 msgId, const ExportedChatInvite & result)`
* `onExportInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EXPORT_INVITE_CALLBACK

## Examples:

`tg->exportInvite(channel, [=](TG_EXPORT_INVITE_CALLBACK){
    ...
}, 30000);`
