# Photo

## Types

* [typePhotoEmpty](#phototypephotoempty)
* [typePhoto](#phototypephoto)

## Photo::typePhotoEmpty

#### Schema:

```c++
photoEmpty#2331b22d id:long = Photo;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Photo::typePhoto

#### Schema:

```c++
photo#9288dd29 flags:# has_stickers:flags.0?true id:long access_hash:long date:int sizes:Vector<PhotoSize> = Photo;
```

#### Parameters:

|Name|Type|
|----|----|
|hasStickers|bool|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|sizes|QList&lt;[PhotoSize](photosize.md)&gt;|

