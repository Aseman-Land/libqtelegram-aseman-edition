# InputMedia

## Types

* typeInputMediaEmpty
* typeInputMediaUploadedPhoto
* typeInputMediaPhoto
* typeInputMediaGeoPoint
* typeInputMediaContact
* typeInputMediaUploadedVideo
* typeInputMediaUploadedThumbVideo
* typeInputMediaVideo
* typeInputMediaUploadedAudio
* typeInputMediaAudio
* typeInputMediaUploadedDocument
* typeInputMediaUploadedThumbDocument
* typeInputMediaDocument
* typeInputMediaVenue
* typeInputMediaGifExternal

## InputMedia::typeInputMediaEmpty

#### Schema:

`inputMediaEmpty#9664f57f = InputMedia;`

#### Parameters:


## InputMedia::typeInputMediaUploadedPhoto

#### Schema:

`inputMediaUploadedPhoto#f7aff1c0 file:InputFile caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|caption|QString|

## InputMedia::typeInputMediaPhoto

#### Schema:

`inputMediaPhoto#e9bfb4f3 id:InputPhoto caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|id|[InputPhoto](inputphoto.md)|
|caption|QString|

## InputMedia::typeInputMediaGeoPoint

#### Schema:

`inputMediaGeoPoint#f9c44144 geo_point:InputGeoPoint = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|

## InputMedia::typeInputMediaContact

#### Schema:

`inputMediaContact#a6e45987 phone_number:string first_name:string last_name:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|

## InputMedia::typeInputMediaUploadedVideo

#### Schema:

`inputMediaUploadedVideo#82713fdf file:InputFile duration:int w:int h:int mime_type:string caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|duration|qint32|
|w|qint32|
|h|qint32|
|mimeType|QString|
|caption|QString|

## InputMedia::typeInputMediaUploadedThumbVideo

#### Schema:

`inputMediaUploadedThumbVideo#7780ddf9 file:InputFile thumb:InputFile duration:int w:int h:int mime_type:string caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|thumb|[InputFile](inputfile.md)|
|duration|qint32|
|w|qint32|
|h|qint32|
|mimeType|QString|
|caption|QString|

## InputMedia::typeInputMediaVideo

#### Schema:

`inputMediaVideo#936a4ebd id:InputVideo caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|id|[InputVideo](inputvideo.md)|
|caption|QString|

## InputMedia::typeInputMediaUploadedAudio

#### Schema:

`inputMediaUploadedAudio#4e498cab file:InputFile duration:int mime_type:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|duration|qint32|
|mimeType|QString|

## InputMedia::typeInputMediaAudio

#### Schema:

`inputMediaAudio#89938781 id:InputAudio = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|id|[InputAudio](inputaudio.md)|

## InputMedia::typeInputMediaUploadedDocument

#### Schema:

`inputMediaUploadedDocument#1d89306d file:InputFile mime_type:string attributes:Vector<DocumentAttribute> caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|mimeType|QString|
|attributes|QList<DocumentAttribute>|
|caption|QString|

## InputMedia::typeInputMediaUploadedThumbDocument

#### Schema:

`inputMediaUploadedThumbDocument#ad613491 file:InputFile thumb:InputFile mime_type:string attributes:Vector<DocumentAttribute> caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|thumb|[InputFile](inputfile.md)|
|mimeType|QString|
|attributes|QList<DocumentAttribute>|
|caption|QString|

## InputMedia::typeInputMediaDocument

#### Schema:

`inputMediaDocument#1a77f29c id:InputDocument caption:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|id|[InputDocument](inputdocument.md)|
|caption|QString|

## InputMedia::typeInputMediaVenue

#### Schema:

`inputMediaVenue#2827a81a geo_point:InputGeoPoint title:string address:string provider:string venue_id:string = InputMedia;`

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

`inputMediaGifExternal#4843b0fd url:string q:string = InputMedia;`

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|q|QString|

