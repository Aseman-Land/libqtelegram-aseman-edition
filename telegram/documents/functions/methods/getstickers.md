# Messages.getStickers

## Function:

TelegramCore::messagesGetStickers

## Schema:

```c++
messages.getStickers#ae22e045 emoticon:string hash:string = messages.Stickers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|emoticon|QString||
|hash|QString||
|callBack|Callback&lt;[MessagesStickers](../../types/messagesstickers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesStickers](../../types/messagesstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getStickersAnswer(qint64 msgId, const MessagesStickers & result)
```
```c++
getStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetStickersAnswer(qint64 msgId, const MessagesStickers & result)
```
```c++
onGetStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_STICKERS_CALLBACK

## Examples:

```c++
tg->getStickers(emoticon, hash, [=](TG_GET_STICKERS_CALLBACK){
    ...
}, 30000);
```
