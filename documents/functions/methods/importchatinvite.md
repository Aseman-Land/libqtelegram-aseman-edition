# Messages.importChatInvite

## Function:

TelegramCore::messagesImportChatInvite

## Schema:

```c++
messages.importChatInvite#6c50051c hash:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
importChatInviteAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
importChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onImportChatInviteAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onImportChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_IMPORT_CHAT_INVITE_CALLBACK

## Examples:

```c++
tg->importChatInvite(hash, [=](TG_IMPORT_CHAT_INVITE_CALLBACK){
    ...
}, 30000);
```
