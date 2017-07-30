# PageBlock

## Types

* [typePageBlockUnsupported](#pageblocktypepageblockunsupported)
* [typePageBlockTitle](#pageblocktypepageblocktitle)
* [typePageBlockSubtitle](#pageblocktypepageblocksubtitle)
* [typePageBlockAuthorDate](#pageblocktypepageblockauthordate)
* [typePageBlockHeader](#pageblocktypepageblockheader)
* [typePageBlockSubheader](#pageblocktypepageblocksubheader)
* [typePageBlockParagraph](#pageblocktypepageblockparagraph)
* [typePageBlockPreformatted](#pageblocktypepageblockpreformatted)
* [typePageBlockFooter](#pageblocktypepageblockfooter)
* [typePageBlockDivider](#pageblocktypepageblockdivider)
* [typePageBlockAnchor](#pageblocktypepageblockanchor)
* [typePageBlockList](#pageblocktypepageblocklist)
* [typePageBlockBlockquote](#pageblocktypepageblockblockquote)
* [typePageBlockPullquote](#pageblocktypepageblockpullquote)
* [typePageBlockPhoto](#pageblocktypepageblockphoto)
* [typePageBlockVideo](#pageblocktypepageblockvideo)
* [typePageBlockCover](#pageblocktypepageblockcover)
* [typePageBlockEmbed](#pageblocktypepageblockembed)
* [typePageBlockEmbedPost](#pageblocktypepageblockembedpost)
* [typePageBlockCollage](#pageblocktypepageblockcollage)
* [typePageBlockSlideshow](#pageblocktypepageblockslideshow)
* [typePageBlockChannel](#pageblocktypepageblockchannel)

## PageBlock::typePageBlockUnsupported

#### Schema:

```c++
pageBlockUnsupported#13567e8a = PageBlock;
```

#### Parameters:


## PageBlock::typePageBlockTitle

#### Schema:

```c++
pageBlockTitle#70abc3fd text:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## PageBlock::typePageBlockSubtitle

#### Schema:

```c++
pageBlockSubtitle#8ffa9a1f text:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## PageBlock::typePageBlockAuthorDate

#### Schema:

```c++
pageBlockAuthorDate#baafe5e0 author:RichText published_date:int = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|author|[RichText](richtext.md)|
|publishedDate|qint32|

## PageBlock::typePageBlockHeader

#### Schema:

```c++
pageBlockHeader#bfd064ec text:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## PageBlock::typePageBlockSubheader

#### Schema:

```c++
pageBlockSubheader#f12bb6e1 text:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## PageBlock::typePageBlockParagraph

#### Schema:

```c++
pageBlockParagraph#467a0766 text:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## PageBlock::typePageBlockPreformatted

#### Schema:

```c++
pageBlockPreformatted#c070d93e text:RichText language:string = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|
|language|QString|

## PageBlock::typePageBlockFooter

#### Schema:

```c++
pageBlockFooter#48870999 text:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## PageBlock::typePageBlockDivider

#### Schema:

```c++
pageBlockDivider#db20b188 = PageBlock;
```

#### Parameters:


## PageBlock::typePageBlockAnchor

#### Schema:

```c++
pageBlockAnchor#ce0d37b0 name:string = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|name|QString|

## PageBlock::typePageBlockList

#### Schema:

```c++
pageBlockList#3a58c7f4 ordered:Bool items:Vector<RichText> = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|ordered|bool|
|items|QList&lt;[RichText](richtext.md)&gt;|

## PageBlock::typePageBlockBlockquote

#### Schema:

```c++
pageBlockBlockquote#263d7c26 text:RichText caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockPullquote

#### Schema:

```c++
pageBlockPullquote#4f4456d3 text:RichText caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockPhoto

#### Schema:

```c++
pageBlockPhoto#e9c69982 photo_id:long caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|photoId|qint64|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockVideo

#### Schema:

```c++
pageBlockVideo#d9d71866 flags:# autoplay:flags.0?true loop:flags.1?true video_id:long caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|autoplay|bool|
|loop|bool|
|videoId|qint64|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockCover

#### Schema:

```c++
pageBlockCover#39f23300 cover:PageBlock = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|cover|[PageBlock](pageblock.md)|

## PageBlock::typePageBlockEmbed

#### Schema:

```c++
pageBlockEmbed#cde200d1 flags:# full_width:flags.0?true allow_scrolling:flags.3?true url:flags.1?string html:flags.2?string poster_photo_id:flags.4?long w:int h:int caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|fullWidth|bool|
|allowScrolling|bool|
|url|QString|
|html|QString|
|posterPhotoId|qint64|
|w|qint32|
|h|qint32|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockEmbedPost

#### Schema:

```c++
pageBlockEmbedPost#292c7be9 url:string webpage_id:long author_photo_id:long author:string date:int blocks:Vector<PageBlock> caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|webpageId|qint64|
|authorPhotoId|qint64|
|author|QString|
|date|qint32|
|blocks|QList&lt;[PageBlock](pageblock.md)&gt;|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockCollage

#### Schema:

```c++
pageBlockCollage#8b31c4f items:Vector<PageBlock> caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|items|QList&lt;[PageBlock](pageblock.md)&gt;|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockSlideshow

#### Schema:

```c++
pageBlockSlideshow#130c8963 items:Vector<PageBlock> caption:RichText = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|items|QList&lt;[PageBlock](pageblock.md)&gt;|
|caption|[RichText](richtext.md)|

## PageBlock::typePageBlockChannel

#### Schema:

```c++
pageBlockChannel#ef1751b5 channel:Chat = PageBlock;
```

#### Parameters:

|Name|Type|
|----|----|
|channel|[Chat](chat.md)|

