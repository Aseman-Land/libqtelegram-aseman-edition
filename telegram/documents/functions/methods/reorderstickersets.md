# Messages.reorderStickerSets

## Function:

TelegramCore::messagesReorderStickerSets

## Schema:

`messages.reorderStickerSets#9fcfbc30 order:Vector<long> = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|order|QList<qint64>||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `reorderStickerSetsAnswer(qint64 msgId, bool  result)`
* `reorderStickerSetsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReorderStickerSetsAnswer(qint64 msgId, bool  result)`
* `onReorderStickerSetsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_REORDER_STICKER_SETS_CALLBACK

## Examples:

`tg->reorderStickerSets(order, [=](TG_REORDER_STICKER_SETS_CALLBACK){
    ...
}, 30000);`
