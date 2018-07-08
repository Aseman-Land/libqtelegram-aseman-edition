# Stickers.createStickerSet

## Function:

TelegramCore::stickersCreateStickerSet

## Schema:

```c++
stickers.createStickerSet#9bd86e6a flags:# masks:flags.0?true user_id:InputUser title:string short_name:string stickers:Vector<InputStickerSetItem> = messages.StickerSet;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|masks|bool||
|userId|[InputUser](../../types/inputuser.md)||
|title|QString||
|shortName|QString||
|stickers|QList&lt;[InputStickerSetItem](../../types/inputstickersetitem.md)&gt;||
|callBack|Callback&lt;[MessagesStickerSet](../../types/messagesstickerset.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesStickerSet](../../types/messagesstickerset.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
createStickerSetAnswer(qint64 msgId, const MessagesStickerSet & result)
```
```c++
createStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCreateStickerSetAnswer(qint64 msgId, const MessagesStickerSet & result)
```
```c++
onCreateStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CREATE_STICKER_SET_CALLBACK

## Examples:

```c++
tg->createStickerSet(masks, user_id, title, short_name, stickers, [=](TG_CREATE_STICKER_SET_CALLBACK){
    ...
}, 30000);
```
