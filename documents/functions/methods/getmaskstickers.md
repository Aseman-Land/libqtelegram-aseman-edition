# Messages.getMaskStickers

## Function:

TelegramCore::messagesGetMaskStickers

## Schema:

```c++
messages.getMaskStickers#65b8c79f hash:int = messages.AllStickers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|qint32||
|callBack|Callback&lt;[MessagesAllStickers](../../types/messagesallstickers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesAllStickers](../../types/messagesallstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getMaskStickersAnswer(qint64 msgId, const MessagesAllStickers & result)
```
```c++
getMaskStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetMaskStickersAnswer(qint64 msgId, const MessagesAllStickers & result)
```
```c++
onGetMaskStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_MASK_STICKERS_CALLBACK

## Examples:

```c++
tg->getMaskStickers(hash, [=](TG_GET_MASK_STICKERS_CALLBACK){
    ...
}, 30000);
```
