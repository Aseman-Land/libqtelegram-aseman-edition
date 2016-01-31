# Document

## Types

* typeDocumentEmpty
* typeDocument

## Document::typeDocumentEmpty

#### Schema:

`documentEmpty#36f8c871 id:long = Document;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Document::typeDocument

#### Schema:

`document#f9a39f4f id:long access_hash:long date:int mime_type:string size:int thumb:PhotoSize dc_id:int attributes:Vector<DocumentAttribute> = Document;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|mimeType|QString|
|size|qint32|
|thumb|[PhotoSize](photosize.md)|
|dcId|qint32|
|attributes|QList<DocumentAttribute>|

