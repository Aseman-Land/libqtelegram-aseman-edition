# Messages.getFullChat

## Function:

TelegramCore::messagesGetFullChat

## Schema:

```c++
messages.getFullChat#3b831c66 chat_id:int = messages.ChatFull;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|callBack|Callback&lt;[MessagesChatFull](../../types/messageschatfull.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesChatFull](../../types/messageschatfull.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getFullChatAnswer(qint64 msgId, const MessagesChatFull & result)
```
```c++
getFullChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetFullChatAnswer(qint64 msgId, const MessagesChatFull & result)
```
```c++
onGetFullChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_FULL_CHAT_CALLBACK

## Examples:

```c++
tg->getFullChat(chat_id, [=](TG_GET_FULL_CHAT_CALLBACK){
    ...
}, 30000);
```
