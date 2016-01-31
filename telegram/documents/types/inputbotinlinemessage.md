# InputBotInlineMessage

## Types

* [typeInputBotInlineMessageMediaAuto](#inputbotinlinemessagetypeinputbotinlinemessagemediaauto)
* [typeInputBotInlineMessageText](#inputbotinlinemessagetypeinputbotinlinemessagetext)

## InputBotInlineMessage::typeInputBotInlineMessageMediaAuto

#### Schema:

```c++
inputBotInlineMessageMediaAuto#2e43e587 caption:string = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|caption|QString|

## InputBotInlineMessage::typeInputBotInlineMessageText

#### Schema:

```c++
inputBotInlineMessageText#adf0df71 flags:# no_webpage:flags.0?true message:string entities:flags.1?Vector<MessageEntity> = InputBotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|noWebpage|bool|
|message|QString|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

