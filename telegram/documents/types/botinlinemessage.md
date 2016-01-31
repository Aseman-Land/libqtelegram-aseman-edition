# BotInlineMessage

## Types

* [typeBotInlineMessageMediaAuto](#botinlinemessagetypebotinlinemessagemediaauto)
* [typeBotInlineMessageText](#botinlinemessagetypebotinlinemessagetext)

## BotInlineMessage::typeBotInlineMessageMediaAuto

#### Schema:

```c++
botInlineMessageMediaAuto#fc56e87d caption:string = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|caption|QString|

## BotInlineMessage::typeBotInlineMessageText

#### Schema:

```c++
botInlineMessageText#a56197a9 flags:# no_webpage:flags.0?true message:string entities:flags.1?Vector<MessageEntity> = BotInlineMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|noWebpage|bool|
|message|QString|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

