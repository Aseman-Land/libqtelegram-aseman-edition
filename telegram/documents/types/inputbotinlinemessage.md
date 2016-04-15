# InputBotInlineMessage

## Types

* [typeInputBotInlineMessageMediaAuto](#inputbotinlinemessagetypeinputbotinlinemessagemediaauto)
* [typeInputBotInlineMessageText](#inputbotinlinemessagetypeinputbotinlinemessagetext)
* [typeInputBotInlineMessageMediaGeo](#inputbotinlinemessagetypeinputbotinlinemessagemediageo)
* [typeInputBotInlineMessageMediaVenue](#inputbotinlinemessagetypeinputbotinlinemessagemediavenue)
* [typeInputBotInlineMessageMediaContact](#inputbotinlinemessagetypeinputbotinlinemessagemediacontact)

## InputBotInlineMessage::typeInputBotInlineMessageMediaAuto

#### Schema:

```c++
inputBotInlineMessageMediaAuto#292fed13 flags:# caption:string reply_markup:flags.2?ReplyMarkup = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|caption|QString|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## InputBotInlineMessage::typeInputBotInlineMessageText

#### Schema:

```c++
inputBotInlineMessageText#3dcd7a87 flags:# no_webpage:flags.0?true message:string entities:flags.1?Vector<MessageEntity> reply_markup:flags.2?ReplyMarkup = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|noWebpage|bool|
|message|QString|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## InputBotInlineMessage::typeInputBotInlineMessageMediaGeo

#### Schema:

```c++
inputBotInlineMessageMediaGeo#f4a59de1 flags:# geo_point:InputGeoPoint reply_markup:flags.2?ReplyMarkup = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## InputBotInlineMessage::typeInputBotInlineMessageMediaVenue

#### Schema:

```c++
inputBotInlineMessageMediaVenue#aaafadc8 flags:# geo_point:InputGeoPoint title:string address:string provider:string venue_id:string reply_markup:flags.2?ReplyMarkup = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|
|title|QString|
|address|QString|
|provider|QString|
|venueId|QString|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

## InputBotInlineMessage::typeInputBotInlineMessageMediaContact

#### Schema:

```c++
inputBotInlineMessageMediaContact#2daf01a7 flags:# phone_number:string first_name:string last_name:string reply_markup:flags.2?ReplyMarkup = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|
|replyMarkup|[ReplyMarkup](replymarkup.md)|

