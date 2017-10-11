# Messages.getCommonChats

## Function:

TelegramCore::messagesGetCommonChats

## Schema:

```c++
messages.getCommonChats#d0a48c4 user_id:InputUser max_id:int limit:int = messages.Chats;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|userId|[InputUser](../../types/inputuser.md)||
|maxId|qint32||
|limit|qint32||
|callBack|Callback&lt;[MessagesChats](../../types/messageschats.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesChats](../../types/messageschats.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getCommonChatsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
getCommonChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetCommonChatsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
onGetCommonChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_COMMON_CHATS_CALLBACK

## Examples:

```c++
tg->getCommonChats(user_id, max_id, limit, [=](TG_GET_COMMON_CHATS_CALLBACK){
    ...
}, 30000);
```
