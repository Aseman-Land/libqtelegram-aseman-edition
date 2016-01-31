# Messages.getChats

## Function:

TelegramCore::messagesGetChats

## Schema:

`messages.getChats#3c6aa187 id:Vector<int> = messages.Chats;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<qint32>||
|callBack|Callback<MessagesChats\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesChats](../../types/messageschats.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getChatsAnswer(qint64 msgId, const MessagesChats & result)`
* `getChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetChatsAnswer(qint64 msgId, const MessagesChats & result)`
* `onGetChatsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_CHATS_CALLBACK

## Examples:

`tg->getChats(id, [=](TG_GET_CHATS_CALLBACK){
    ...
}, 30000);`
