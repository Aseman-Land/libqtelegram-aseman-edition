# WallPaper

## Types

* [typeWallPaper](#wallpapertypewallpaper)
* [typeWallPaperSolid](#wallpapertypewallpapersolid)

## WallPaper::typeWallPaper

#### Schema:

```c++
wallPaper#ccb03657 id:int title:string sizes:Vector<PhotoSize> color:int = WallPaper;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|title|QString|
|sizes|QList&lt;[PhotoSize](photosize.md)&gt;|
|color|qint32|

## WallPaper::typeWallPaperSolid

#### Schema:

```c++
wallPaperSolid#63117f24 id:int title:string bg_color:int color:int = WallPaper;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|title|QString|
|bgColor|qint32|
|color|qint32|

