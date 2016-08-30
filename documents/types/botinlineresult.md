# BotInlineResult

## Types

* [typeBotInlineResult](#botinlineresulttypebotinlineresult)
* [typeBotInlineMediaResult](#botinlineresulttypebotinlinemediaresult)

## BotInlineResult::typeBotInlineResult

#### Schema:

```c++
botInlineResult#9bebaeb9 flags:# id:string type:string title:flags.1?string description:flags.2?string url:flags.3?string thumb_url:flags.4?string content_url:flags.5?string content_type:flags.5?string w:flags.6?int h:flags.6?int duration:flags.7?int send_message:BotInlineMessage = BotInlineResult;
```

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|type|QString|
|title|QString|
|description|QString|
|url|QString|
|thumbUrl|QString|
|contentUrl|QString|
|contentType|QString|
|w|qint32|
|h|qint32|
|duration|qint32|
|sendMessage|[BotInlineMessage](botinlinemessage.md)|

## BotInlineResult::typeBotInlineMediaResult

#### Schema:

```c++
botInlineMediaResult#17db940b flags:# id:string type:string photo:flags.0?Photo document:flags.1?Document title:flags.2?string description:flags.3?string send_message:BotInlineMessage = BotInlineResult;
```

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|type|QString|
|photo|[Photo](photo.md)|
|document|[Document](document.md)|
|title|QString|
|description|QString|
|sendMessage|[BotInlineMessage](botinlinemessage.md)|

