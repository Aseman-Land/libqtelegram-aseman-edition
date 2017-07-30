# Messages.getAllChats

## Function:

TelegramCore::messagesGetAllChats

## Schema:

```c++
messages.getAllChats#eba80ff0 except_ids:Vector<int> = messages.Chats;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|exceptIds|QList&lt;qint32&gt;||
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
getAllChatsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
getAllChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAllChatsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
onGetAllChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ALL_CHATS_CALLBACK

## Examples:

```c++
tg->getAllChats(except_ids, [=](TG_GET_ALL_CHATS_CALLBACK){
    ...
}, 30000);
```
