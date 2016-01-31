# Messages.editChatAdmin

## Function:

TelegramCore::messagesEditChatAdmin

## Schema:

```c++
messages.editChatAdmin#a9e69f2e chat_id:int user_id:InputUser is_admin:Bool = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|isAdmin|bool||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
editChatAdminAnswer(qint64 msgId, bool  result)
```
```c++
editChatAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditChatAdminAnswer(qint64 msgId, bool  result)
```
```c++
onEditChatAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_CHAT_ADMIN_CALLBACK

## Examples:

```c++
tg->editChatAdmin(chat_id, user_id, is_admin, [=](TG_EDIT_CHAT_ADMIN_CALLBACK){
    ...
}, 30000);
```
