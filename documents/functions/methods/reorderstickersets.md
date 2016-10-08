# Messages.reorderStickerSets

## Function:

TelegramCore::messagesReorderStickerSets

## Schema:

```c++
messages.reorderStickerSets#78337739 flags:# masks:flags.0?true order:Vector<long> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|masks|bool||
|order|QList&lt;qint64&gt;||
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
reorderStickerSetsAnswer(qint64 msgId, bool  result)
```
```c++
reorderStickerSetsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReorderStickerSetsAnswer(qint64 msgId, bool  result)
```
```c++
onReorderStickerSetsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REORDER_STICKER_SETS_CALLBACK

## Examples:

```c++
tg->reorderStickerSets(masks, order, [=](TG_REORDER_STICKER_SETS_CALLBACK){
    ...
}, 30000);
```
