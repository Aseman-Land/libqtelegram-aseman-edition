# Video

## Types

* [typeVideoEmpty](#videotypevideoempty)
* [typeVideo](#videotypevideo)

## Video::typeVideoEmpty

#### Schema:

`videoEmpty#c10658a8 id:long = Video;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Video::typeVideo

#### Schema:

`video#f72887d3 id:long access_hash:long date:int duration:int mime_type:string size:int thumb:PhotoSize dc_id:int w:int h:int = Video;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|duration|qint32|
|mimeType|QString|
|size|qint32|
|thumb|[PhotoSize](photosize.md)|
|dcId|qint32|
|w|qint32|
|h|qint32|

