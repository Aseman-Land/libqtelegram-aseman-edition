# BotInlineMessage

## Types

* [typeBotInlineMessageMediaAuto](#botinlinemessagetypebotinlinemessagemediaauto)
* [typeBotInlineMessageText](#botinlinemessagetypebotinlinemessagetext)
* [typeBotInlineMessageMediaGeo](#botinlinemessagetypebotinlinemessagemediageo)
* [typeBotInlineMessageMediaVenue](#botinlinemessagetypebotinlinemessagemediavenue)
* [typeBotInlineMessageMediaContact](#botinlinemessagetypebotinlinemessagemediacontact)

## BotInlineMessage::typeBotInlineMessageMediaAuto

#### Schema:

```c++
botInlineMessageMediaAuto#a74b15b flags:# caption:string reply_markup:flags.2?ReplyMarkup = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|caption|QString|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## BotInlineMessage::typeBotInlineMessageText

#### Schema:

```c++
botInlineMessageText#8c7f65e2 flags:# no_webpage:flags.0?true message:string entities:flags.1?Vector<MessageEntity> reply_markup:flags.2?ReplyMarkup = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|noWebpage|bool|
|message|QString|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## BotInlineMessage::typeBotInlineMessageMediaGeo

#### Schema:

```c++
botInlineMessageMediaGeo#3a8fd8b8 flags:# geo:GeoPoint reply_markup:flags.2?ReplyMarkup = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|geo|[GeoPoint](geopoint.md)|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## BotInlineMessage::typeBotInlineMessageMediaVenue

#### Schema:

```c++
botInlineMessageMediaVenue#4366232e flags:# geo:GeoPoint title:string address:string provider:string venue_id:string reply_markup:flags.2?ReplyMarkup = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|geo|[GeoPoint](geopoint.md)|
|title|QString|
|address|QString|
|provider|QString|
|venueId|QString|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## BotInlineMessage::typeBotInlineMessageMediaContact

#### Schema:

```c++
botInlineMessageMediaContact#35edb4d4 flags:# phone_number:string first_name:string last_name:string reply_markup:flags.2?ReplyMarkup = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

