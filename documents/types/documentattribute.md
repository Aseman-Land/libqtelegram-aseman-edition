# DocumentAttribute

## Types

* [typeDocumentAttributeImageSize](#documentattributetypedocumentattributeimagesize)
* [typeDocumentAttributeAnimated](#documentattributetypedocumentattributeanimated)
* [typeDocumentAttributeSticker](#documentattributetypedocumentattributesticker)
* [typeDocumentAttributeVideo](#documentattributetypedocumentattributevideo)
* [typeDocumentAttributeAudio](#documentattributetypedocumentattributeaudio)
* [typeDocumentAttributeFilename](#documentattributetypedocumentattributefilename)
* [typeDocumentAttributeHasStickers](#documentattributetypedocumentattributehasstickers)
* [typeDocumentAttributeImageSizeSecret23](#documentattributetypedocumentattributeimagesizesecret23)
* [typeDocumentAttributeAnimatedSecret23](#documentattributetypedocumentattributeanimatedsecret23)
* [typeDocumentAttributeStickerSecret23](#documentattributetypedocumentattributestickersecret23)
* [typeDocumentAttributeVideoSecret23](#documentattributetypedocumentattributevideosecret23)
* [typeDocumentAttributeAudioSecret23](#documentattributetypedocumentattributeaudiosecret23)
* [typeDocumentAttributeFilenameSecret23](#documentattributetypedocumentattributefilenamesecret23)

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
documentAttributeSticker#6319d612 flags:# mask:flags.1?true alt:string stickerset:InputStickerSet mask_coords:flags.0?MaskCoords = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|mask|bool|
|alt|QString|
|stickerset|[InputStickerSet](inputstickerset.md)|
|maskCoords|[MaskCoords](maskcoords.md)|

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
documentAttributeAudio#9852f9c6 flags:# voice:flags.10?true duration:int title:flags.0?string performer:flags.1?string waveform:flags.2?bytes = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|voice|bool|
|duration|qint32|
|title|QString|
|performer|QString|
|waveform|QByteArray|

## DocumentAttribute::typeDocumentAttributeFilename

#### Schema:

```c++
documentAttributeFilename#15590068 file_name:string = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|fileName|QString|

## DocumentAttribute::typeDocumentAttributeHasStickers

#### Schema:

```c++
documentAttributeHasStickers#9801d2f7 = DocumentAttribute;
```

#### Parameters:


## DocumentAttribute::typeDocumentAttributeImageSizeSecret23

#### Schema:

```c++
documentAttributeImageSize_Secret23#6c37c15c w:int h:int = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|w|qint32|
|h|qint32|

## DocumentAttribute::typeDocumentAttributeAnimatedSecret23

#### Schema:

```c++
documentAttributeAnimated_Secret23#11b58939 = DocumentAttribute;
```

#### Parameters:


## DocumentAttribute::typeDocumentAttributeStickerSecret23

#### Schema:

```c++
documentAttributeSticker_Secret23#fb0a5727 = DocumentAttribute;
```

#### Parameters:


## DocumentAttribute::typeDocumentAttributeVideoSecret23

#### Schema:

```c++
documentAttributeVideo_Secret23#5910cccb duration:int w:int h:int = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|duration|qint32|
|w|qint32|
|h|qint32|

## DocumentAttribute::typeDocumentAttributeAudioSecret23

#### Schema:

```c++
documentAttributeAudio_Secret23#51448e5 duration:int = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|duration|qint32|

## DocumentAttribute::typeDocumentAttributeFilenameSecret23

#### Schema:

```c++
documentAttributeFilename_Secret23#15590068 file_name:string = DocumentAttribute;
```

#### Parameters:

|Name|Type|
|----|----|
|fileName|QString|

