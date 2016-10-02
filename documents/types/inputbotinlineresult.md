# InputBotInlineResult

## Types

* [typeInputBotInlineResult](#inputbotinlineresulttypeinputbotinlineresult)
* [typeInputBotInlineResultPhoto](#inputbotinlineresulttypeinputbotinlineresultphoto)
* [typeInputBotInlineResultDocument](#inputbotinlineresulttypeinputbotinlineresultdocument)

## InputBotInlineResult::typeInputBotInlineResult

#### Schema:

```c++
inputBotInlineResult#2cbbe15a flags:# id:string type:string title:flags.1?string description:flags.2?string url:flags.3?string thumb_url:flags.4?string content_url:flags.5?string content_type:flags.5?string w:flags.6?int h:flags.6?int duration:flags.7?int send_message:InputBotInlineMessage = InputBotInlineResult;
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
|sendMessage|[InputBotInlineMessage](inputbotinlinemessage.md)|

## InputBotInlineResult::typeInputBotInlineResultPhoto

#### Schema:

```c++
inputBotInlineResultPhoto#a8d864a7 id:string type:string photo:InputPhoto send_message:InputBotInlineMessage = InputBotInlineResult;
```

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|type|QString|
|photo|[InputPhoto](inputphoto.md)|
|sendMessage|[InputBotInlineMessage](inputbotinlinemessage.md)|

## InputBotInlineResult::typeInputBotInlineResultDocument

#### Schema:

```c++
inputBotInlineResultDocument#fff8fdc4 flags:# id:string type:string title:flags.1?string description:flags.2?string document:InputDocument send_message:InputBotInlineMessage = InputBotInlineResult;
```

#### Parameters:

|Name|Type|
|----|----|
|id|QString|
|type|QString|
|title|QString|
|description|QString|
|document|[InputDocument](inputdocument.md)|
|sendMessage|[InputBotInlineMessage](inputbotinlinemessage.md)|

