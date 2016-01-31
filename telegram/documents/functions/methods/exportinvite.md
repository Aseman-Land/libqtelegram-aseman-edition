# Channels.exportInvite

## Function:

TelegramCore::channelsExportInvite

## Schema:

```c++
channels.exportInvite#c7560885 channel:InputChannel = ExportedChatInvite;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|callBack|Callback&lt;[ExportedChatInvite](../../types/exportedchatinvite.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ExportedChatInvite](../../types/exportedchatinvite.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
exportInviteAnswer(qint64 msgId, const ExportedChatInvite & result)
```
```c++
exportInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onExportInviteAnswer(qint64 msgId, const ExportedChatInvite & result)
```
```c++
onExportInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EXPORT_INVITE_CALLBACK

## Examples:

```c++
tg->exportInvite(channel, [=](TG_EXPORT_INVITE_CALLBACK){
    ...
}, 30000);
```
