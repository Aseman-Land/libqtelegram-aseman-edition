# Messages.getChats

## Function:

TelegramCore::messagesGetChats

## Schema:

```c++
messages.getChats#3c6aa187 id:Vector<int> = messages.Chats;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;qint32&gt;||
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
getChatsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
getChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetChatsAnswer(qint64 msgId, const MessagesChats & result)
```
```c++
onGetChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CHATS_CALLBACK

## Examples:

```c++
tg->getChats(id, [=](TG_GET_CHATS_CALLBACK){
    ...
}, 30000);
```
