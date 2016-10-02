# MessagesRecentStickers

## Types

* [typeMessagesRecentStickersNotModified](#messagesrecentstickerstypemessagesrecentstickersnotmodified)
* [typeMessagesRecentStickers](#messagesrecentstickerstypemessagesrecentstickers)

## MessagesRecentStickers::typeMessagesRecentStickersNotModified

#### Schema:

```c++
messages.recentStickersNotModified#b17f890 = messages.RecentStickers;
```

#### Parameters:


## MessagesRecentStickers::typeMessagesRecentStickers

#### Schema:

```c++
messages.recentStickers#5ce20970 hash:int stickers:Vector<Document> = messages.RecentStickers;
```

#### Parameters:

|Name|Type|
|----|----|
|hash|qint32|
|stickers|QList&lt;[Document](document.md)&gt;|

