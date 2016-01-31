# DocumentAttribute

## Types

* [typeDocumentAttributeImageSize](#documentattributetypedocumentattributeimagesize)
* [typeDocumentAttributeAnimated](#documentattributetypedocumentattributeanimated)
* [typeDocumentAttributeSticker](#documentattributetypedocumentattributesticker)
* [typeDocumentAttributeVideo](#documentattributetypedocumentattributevideo)
* [typeDocumentAttributeAudio](#documentattributetypedocumentattributeaudio)
* [typeDocumentAttributeFilename](#documentattributetypedocumentattributefilename)

## DocumentAttribute::typeDocumentAttributeImageSize

#### Schema:

```c++
documentAttributeImageSize#6c37c15c w:int h:int = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|w|qint32|
|h|qint32|

## DocumentAttribute::typeDocumentAttributeAnimated

#### Schema:

```c++
documentAttributeAnimated#11b58939 = DocumentAttribute;
```

#### Parameters:


## DocumentAttribute::typeDocumentAttributeSticker

#### Schema:

```c++
documentAttributeSticker#3a556302 alt:string stickerset:InputStickerSet = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|alt|QString|
|stickerset|[InputStickerSet](inputstickerset.md)|

## DocumentAttribute::typeDocumentAttributeVideo

#### Schema:

```c++
documentAttributeVideo#5910cccb duration:int w:int h:int = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|duration|qint32|
|w|qint32|
|h|qint32|

## DocumentAttribute::typeDocumentAttributeAudio

#### Schema:

```c++
documentAttributeAudio#ded218e0 duration:int title:string performer:string = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|duration|qint32|
|title|QString|
|performer|QString|

## DocumentAttribute::typeDocumentAttributeFilename

#### Schema:

```c++
documentAttributeFilename#15590068 file_name:string = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|fileName|QString|

