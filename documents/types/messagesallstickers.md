# MessagesAllStickers

## Types

* [typeMessagesAllStickersNotModified](#messagesallstickerstypemessagesallstickersnotmodified)
* [typeMessagesAllStickers](#messagesallstickerstypemessagesallstickers)

## MessagesAllStickers::typeMessagesAllStickersNotModified

#### Schema:

```c++
messages.allStickersNotModified#e86602c3 = messages.AllStickers;
```

#### Parameters:


## MessagesAllStickers::typeMessagesAllStickers

#### Schema:

```c++
messages.allStickers#edfd405f hash:int sets:Vector<StickerSet> = messages.AllStickers;
```

#### Parameters:

|Name|Type|
|----|----|
|hash|qint32|
|sets|QList&lt;[StickerSet](stickerset.md)&gt;|

