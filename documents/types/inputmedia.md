# InputMedia

## Types

* [typeInputMediaEmpty](#inputmediatypeinputmediaempty)
* [typeInputMediaUploadedPhoto](#inputmediatypeinputmediauploadedphoto)
* [typeInputMediaPhoto](#inputmediatypeinputmediaphoto)
* [typeInputMediaGeoPoint](#inputmediatypeinputmediageopoint)
* [typeInputMediaContact](#inputmediatypeinputmediacontact)
* [typeInputMediaUploadedDocument](#inputmediatypeinputmediauploadeddocument)
* [typeInputMediaUploadedThumbDocument](#inputmediatypeinputmediauploadedthumbdocument)
* [typeInputMediaDocument](#inputmediatypeinputmediadocument)
* [typeInputMediaVenue](#inputmediatypeinputmediavenue)
* [typeInputMediaGifExternal](#inputmediatypeinputmediagifexternal)
* [typeInputMediaPhotoExternal](#inputmediatypeinputmediaphotoexternal)
* [typeInputMediaDocumentExternal](#inputmediatypeinputmediadocumentexternal)
* [typeInputMediaGame](#inputmediatypeinputmediagame)

## InputMedia::typeInputMediaEmpty

#### Schema:

```c++
inputMediaEmpty#9664f57f = InputMedia;
```

#### Parameters:


## InputMedia::typeInputMediaUploadedPhoto

#### Schema:

```c++
inputMediaUploadedPhoto#630c9af1 flags:# file:InputFile caption:string stickers:flags.0?Vector<InputDocument> = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|caption|QString|
|stickers|QList&lt;[InputDocument](inputdocument.md)&gt;|

## InputMedia::typeInputMediaPhoto

#### Schema:

```c++
inputMediaPhoto#e9bfb4f3 id:InputPhoto caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputPhoto](inputphoto.md)|
|caption|QString|

## InputMedia::typeInputMediaGeoPoint

#### Schema:

```c++
inputMediaGeoPoint#f9c44144 geo_point:InputGeoPoint = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|

## InputMedia::typeInputMediaContact

#### Schema:

```c++
inputMediaContact#a6e45987 phone_number:string first_name:string last_name:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|

## InputMedia::typeInputMediaUploadedDocument

#### Schema:

```c++
inputMediaUploadedDocument#d070f1e9 flags:# file:InputFile mime_type:string attributes:Vector<DocumentAttribute> caption:string stickers:flags.0?Vector<InputDocument> = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|mimeType|QString|
|attributes|QList&lt;[DocumentAttribute](documentattribute.md)&gt;|
|caption|QString|
|stickers|QList&lt;[InputDocument](inputdocument.md)&gt;|

## InputMedia::typeInputMediaUploadedThumbDocument

#### Schema:

```c++
inputMediaUploadedThumbDocument#50d88cae flags:# file:InputFile thumb:InputFile mime_type:string attributes:Vector<DocumentAttribute> caption:string stickers:flags.0?Vector<InputDocument> = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|thumb|[InputFile](inputfile.md)|
|mimeType|QString|
|attributes|QList&lt;[DocumentAttribute](documentattribute.md)&gt;|
|caption|QString|
|stickers|QList&lt;[InputDocument](inputdocument.md)&gt;|

## InputMedia::typeInputMediaDocument

#### Schema:

```c++
inputMediaDocument#1a77f29c id:InputDocument caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputDocument](inputdocument.md)|
|caption|QString|

## InputMedia::typeInputMediaVenue

#### Schema:

```c++
inputMediaVenue#2827a81a geo_point:InputGeoPoint title:string address:string provider:string venue_id:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|
|title|QString|
|address|QString|
|provider|QString|
|venueId|QString|

## InputMedia::typeInputMediaGifExternal

#### Schema:

```c++
inputMediaGifExternal#4843b0fd url:string q:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|q|QString|

## InputMedia::typeInputMediaPhotoExternal

#### Schema:

```c++
inputMediaPhotoExternal#b55f4f18 url:string caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|caption|QString|

## InputMedia::typeInputMediaDocumentExternal

#### Schema:

```c++
inputMediaDocumentExternal#e5e9607c url:string caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|caption|QString|

## InputMedia::typeInputMediaGame

#### Schema:

```c++
inputMediaGame#d33f43f3 id:InputGame = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputGame](inputgame.md)|

