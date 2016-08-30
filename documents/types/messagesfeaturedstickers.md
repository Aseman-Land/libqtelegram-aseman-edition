# MessagesFeaturedStickers

## Types

* [typeMessagesFeaturedStickersNotModified](#messagesfeaturedstickerstypemessagesfeaturedstickersnotmodified)
* [typeMessagesFeaturedStickers](#messagesfeaturedstickerstypemessagesfeaturedstickers)

## MessagesFeaturedStickers::typeMessagesFeaturedStickersNotModified

#### Schema:

```c++
messages.featuredStickersNotModified#4ede3cf = messages.FeaturedStickers;
```

#### Parameters:


## MessagesFeaturedStickers::typeMessagesFeaturedStickers

#### Schema:

```c++
messages.featuredStickers#f89d88e5 hash:int sets:Vector<StickerSetCovered> unread:Vector<long> = messages.FeaturedStickers;
```

#### Parameters:

|Name|Type|
|----|----|
|hash|qint32|
|sets|QList&lt;[StickerSetCovered](stickersetcovered.md)&gt;|
|unread|QList&lt;qint64&gt;|

