# MessageMedia

## Types

* [typeMessageMediaEmpty](#messagemediatypemessagemediaempty)
* [typeMessageMediaPhoto](#messagemediatypemessagemediaphoto)
* [typeMessageMediaVideo](#messagemediatypemessagemediavideo)
* [typeMessageMediaGeo](#messagemediatypemessagemediageo)
* [typeMessageMediaContact](#messagemediatypemessagemediacontact)
* [typeMessageMediaUnsupported](#messagemediatypemessagemediaunsupported)
* [typeMessageMediaDocument](#messagemediatypemessagemediadocument)
* [typeMessageMediaAudio](#messagemediatypemessagemediaaudio)
* [typeMessageMediaWebPage](#messagemediatypemessagemediawebpage)
* [typeMessageMediaVenue](#messagemediatypemessagemediavenue)

## MessageMedia::typeMessageMediaEmpty

#### Schema:

`messageMediaEmpty#3ded6320 = MessageMedia;`

#### Parameters:


## MessageMedia::typeMessageMediaPhoto

#### Schema:

`messageMediaPhoto#3d8ce53d photo:Photo caption:string = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|photo|[Photo](photo.md)|
|caption|QString|

## MessageMedia::typeMessageMediaVideo

#### Schema:

`messageMediaVideo#5bcf1675 video:Video caption:string = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|video|[Video](video.md)|
|caption|QString|

## MessageMedia::typeMessageMediaGeo

#### Schema:

`messageMediaGeo#56e0d474 geo:GeoPoint = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|geo|[GeoPoint](geopoint.md)|

## MessageMedia::typeMessageMediaContact

#### Schema:

`messageMediaContact#5e7d2f39 phone_number:string first_name:string last_name:string user_id:int = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|
|userId|qint32|

## MessageMedia::typeMessageMediaUnsupported

#### Schema:

`messageMediaUnsupported#9f84f49e = MessageMedia;`

#### Parameters:


## MessageMedia::typeMessageMediaDocument

#### Schema:

`messageMediaDocument#f3e02ea8 document:Document caption:string = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|document|[Document](document.md)|
|caption|QString|

## MessageMedia::typeMessageMediaAudio

#### Schema:

`messageMediaAudio#c6b68300 audio:Audio = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|audio|[Audio](audio.md)|

## MessageMedia::typeMessageMediaWebPage

#### Schema:

`messageMediaWebPage#a32dd600 webpage:WebPage = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|webpage|[WebPage](webpage.md)|

## MessageMedia::typeMessageMediaVenue

#### Schema:

`messageMediaVenue#7912b71f geo:GeoPoint title:string address:string provider:string venue_id:string = MessageMedia;`

#### Parameters:

|Name|Type|
|----|----|
|geo|[GeoPoint](geopoint.md)|
|title|QString|
|address|QString|
|provider|QString|
|venueId|QString|

