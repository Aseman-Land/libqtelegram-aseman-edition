# Messages.deleteChatUser

## Function:

TelegramCore::messagesDeleteChatUser

## Schema:

```c++
messages.deleteChatUser#e0611f16 chat_id:int user_id:InputUser = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|userId|[InputUser](../../types/inputuser.md)||
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
deleteChatUserAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
deleteChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteChatUserAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onDeleteChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_CHAT_USER_CALLBACK

## Examples:

```c++
tg->deleteChatUser(chat_id, user_id, [=](TG_DELETE_CHAT_USER_CALLBACK){
    ...
}, 30000);
```
