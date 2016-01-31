# MessagesSavedGifs

## Types

* [typeMessagesSavedGifsNotModified](#messagessavedgifstypemessagessavedgifsnotmodified)
* [typeMessagesSavedGifs](#messagessavedgifstypemessagessavedgifs)

## MessagesSavedGifs::typeMessagesSavedGifsNotModified

#### Schema:

```c++
messages.savedGifsNotModified#e8025ca2 = messages.SavedGifs;
```

#### Parameters:


## MessagesSavedGifs::typeMessagesSavedGifs

#### Schema:

```c++
messages.savedGifs#2e0709a5 hash:int gifs:Vector<Document> = messages.SavedGifs;
```

#### Parameters:

|Name|Type|
|----|----|
|hash|qint32|
|gifs|QList&lt;[Document](document.md)&gt;|

