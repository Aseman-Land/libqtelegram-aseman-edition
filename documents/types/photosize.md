# PhotoSize

## Types

* [typePhotoSizeEmpty](#photosizetypephotosizeempty)
* [typePhotoSize](#photosizetypephotosize)
* [typePhotoCachedSize](#photosizetypephotocachedsize)
* [typePhotoSizeEmptySecret23](#photosizetypephotosizeemptysecret23)
* [typePhotoSizeSecret23](#photosizetypephotosizesecret23)
* [typePhotoCachedSizeSecret23](#photosizetypephotocachedsizesecret23)

## PhotoSize::typePhotoSizeEmpty

#### Schema:

```c++
photoSizeEmpty#e17e23c type:string = PhotoSize;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|

## PhotoSize::typePhotoSize

#### Schema:

```c++
photoSize#77bfb61b type:string location:FileLocation w:int h:int size:int = PhotoSize;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|
|location|[FileLocation](filelocation.md)|
|w|qint32|
|h|qint32|
|size|qint32|

## PhotoSize::typePhotoCachedSize

#### Schema:

```c++
photoCachedSize#e9a734fa type:string location:FileLocation w:int h:int bytes:bytes = PhotoSize;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|
|location|[FileLocation](filelocation.md)|
|w|qint32|
|h|qint32|
|bytes|QByteArray|

## PhotoSize::typePhotoSizeEmptySecret23

#### Schema:

```c++
photoSizeEmpty_Secret23#e17e23c type:string = PhotoSize;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|

## PhotoSize::typePhotoSizeSecret23

#### Schema:

```c++
photoSize_Secret23#77bfb61b type:string location:FileLocation w:int h:int size:int = PhotoSize;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|
|location|[FileLocation](filelocation.md)|
|w|qint32|
|h|qint32|
|size|qint32|

## PhotoSize::typePhotoCachedSizeSecret23

#### Schema:

```c++
photoCachedSize_Secret23#e9a734fa type:string location:FileLocation w:int h:int bytes:bytes = PhotoSize;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|
|location|[FileLocation](filelocation.md)|
|w|qint32|
|h|qint32|
|bytes|QByteArray|

