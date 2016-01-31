# Messages.toggleChatAdmins

## Function:

TelegramCore::messagesToggleChatAdmins

## Schema:

```c++
messages.toggleChatAdmins#ec8bd9e1 chat_id:int enabled:Bool = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|enabled|bool||
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
toggleChatAdminsAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
toggleChatAdminsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onToggleChatAdminsAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onToggleChatAdminsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_TOGGLE_CHAT_ADMINS_CALLBACK

## Examples:

```c++
tg->toggleChatAdmins(chat_id, enabled, [=](TG_TOGGLE_CHAT_ADMINS_CALLBACK){
    ...
}, 30000);
```
