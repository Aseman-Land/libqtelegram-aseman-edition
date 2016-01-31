# Messages.exportChatInvite

## Function:

TelegramCore::messagesExportChatInvite

## Schema:

```c++
messages.exportChatInvite#7d885289 chat_id:int = ExportedChatInvite;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
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
exportChatInviteAnswer(qint64 msgId, const ExportedChatInvite & result)
```
```c++
exportChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onExportChatInviteAnswer(qint64 msgId, const ExportedChatInvite & result)
```
```c++
onExportChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EXPORT_CHAT_INVITE_CALLBACK

## Examples:

```c++
tg->exportChatInvite(chat_id, [=](TG_EXPORT_CHAT_INVITE_CALLBACK){
    ...
}, 30000);
```
