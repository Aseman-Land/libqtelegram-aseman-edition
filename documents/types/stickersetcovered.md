# StickerSetCovered

## Types

* [typeStickerSetCovered](#stickersetcoveredtypestickersetcovered)
* [typeStickerSetMultiCovered](#stickersetcoveredtypestickersetmulticovered)

## StickerSetCovered::typeStickerSetCovered

#### Schema:

```c++
stickerSetCovered#6410a5d2 set:StickerSet cover:Document = StickerSetCovered;
```

#### Parameters:

|Name|Type|
|----|----|
|set|[StickerSet](stickerset.md)|
|cover|[Document](document.md)|

## StickerSetCovered::typeStickerSetMultiCovered

#### Schema:

```c++
stickerSetMultiCovered#3407e51b set:StickerSet covers:Vector<Document> = StickerSetCovered;
```

#### Parameters:

|Name|Type|
|----|----|
|set|[StickerSet](stickerset.md)|
|covers|QList&lt;[Document](document.md)&gt;|

