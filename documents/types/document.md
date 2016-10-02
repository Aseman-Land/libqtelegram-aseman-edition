# Document

## Types

* [typeDocumentEmpty](#documenttypedocumentempty)
* [typeDocument](#documenttypedocument)

## Document::typeDocumentEmpty

#### Schema:

```c++
documentEmpty#36f8c871 id:long = Document;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Document::typeDocument

#### Schema:

```c++
document#87232bc7 id:long access_hash:long date:int mime_type:string size:int thumb:PhotoSize dc_id:int version:int attributes:Vector<DocumentAttribute> = Document;
```

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
|version|qint32|
|attributes|QList&lt;[DocumentAttribute](documentattribute.md)&gt;|

