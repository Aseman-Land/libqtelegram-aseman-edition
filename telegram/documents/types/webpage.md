# WebPage

## Types

* [typeWebPageEmpty](#webpagetypewebpageempty)
* [typeWebPagePending](#webpagetypewebpagepending)
* [typeWebPage](#webpagetypewebpage)

## WebPage::typeWebPageEmpty

#### Schema:

```c++
webPageEmpty#eb1477e8 id:long = WebPage;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## WebPage::typeWebPagePending

#### Schema:

```c++
webPagePending#c586da1c id:long date:int = WebPage;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|date|qint32|

## WebPage::typeWebPage

#### Schema:

```c++
webPage#ca820ed7 flags:# id:long url:string display_url:string type:flags.0?string site_name:flags.1?string title:flags.2?string description:flags.3?string photo:flags.4?Photo embed_url:flags.5?string embed_type:flags.5?string embed_width:flags.6?int embed_height:flags.6?int duration:flags.7?int author:flags.8?string document:flags.9?Document = WebPage;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|url|QString|
|displayUrl|QString|
|type|QString|
|siteName|QString|
|title|QString|
|description|QString|
|photo|[Photo](photo.md)|
|embedUrl|QString|
|embedType|QString|
|embedWidth|qint32|
|embedHeight|qint32|
|duration|qint32|
|author|QString|
|document|[Document](document.md)|

