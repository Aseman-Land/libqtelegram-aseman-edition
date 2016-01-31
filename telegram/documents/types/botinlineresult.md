# BotInlineResult

## Types

* [typeBotInlineMediaResultDocument](#botinlineresulttypebotinlinemediaresultdocument)
* [typeBotInlineMediaResultPhoto](#botinlineresulttypebotinlinemediaresultphoto)
* [typeBotInlineResult](#botinlineresulttypebotinlineresult)

## BotInlineResult::typeBotInlineMediaResultDocument

#### Schema:

`botInlineMediaResultDocument#f897d33e id:string type:string document:Document send_message:BotInlineMessage = BotInlineResult;`

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|type|QString|
|document|[Document](document.md)|
|sendMessage|[BotInlineMessage](botinlinemessage.md)|

## BotInlineResult::typeBotInlineMediaResultPhoto

#### Schema:

`botInlineMediaResultPhoto#c5528587 id:string type:string photo:Photo send_message:BotInlineMessage = BotInlineResult;`

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|type|QString|
|photo|[Photo](photo.md)|
|sendMessage|[BotInlineMessage](botinlinemessage.md)|

## BotInlineResult::typeBotInlineResult

#### Schema:

`botInlineResult#9bebaeb9 flags:# id:string type:string title:flags.1?string description:flags.2?string url:flags.3?string thumb_url:flags.4?string content_url:flags.5?string content_type:flags.5?string w:flags.6?int h:flags.6?int duration:flags.7?int send_message:BotInlineMessage = BotInlineResult;`

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

