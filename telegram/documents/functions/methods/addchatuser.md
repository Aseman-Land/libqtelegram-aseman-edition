# Messages.addChatUser

## Function:

TelegramCore::messagesAddChatUser

## Schema:

```c++
messages.addChatUser#f9a0aa09 chat_id:int user_id:InputUser fwd_limit:int = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|fwdLimit|qint32||
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
addChatUserAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
addChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onAddChatUserAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onAddChatUserError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_ADD_CHAT_USER_CALLBACK

## Examples:

```c++
tg->addChatUser(chat_id, user_id, fwd_limit, [=](TG_ADD_CHAT_USER_CALLBACK){
    ...
}, 30000);
```
