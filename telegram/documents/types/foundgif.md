# FoundGif

## Types

* typeFoundGif
* typeFoundGifCached

## FoundGif::typeFoundGif

#### Schema:

`foundGif#162ecc1f url:string thumb_url:string content_url:string content_type:string w:int h:int = FoundGif;`

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|thumbUrl|QString|
|contentUrl|QString|
|contentType|QString|
|w|qint32|
|h|qint32|

## FoundGif::typeFoundGifCached

#### Schema:

`foundGifCached#9c750409 url:string photo:Photo document:Document = FoundGif;`

#### Parameters:

|Name|Type|
|----|----|
|url|QString|
|photo|[Photo](photo.md)|
|document|[Document](document.md)|

