# MessageEntity

## Types

* [typeMessageEntityUnknown](#messageentitytypemessageentityunknown)
* [typeMessageEntityMention](#messageentitytypemessageentitymention)
* [typeMessageEntityHashtag](#messageentitytypemessageentityhashtag)
* [typeMessageEntityBotCommand](#messageentitytypemessageentitybotcommand)
* [typeMessageEntityUrl](#messageentitytypemessageentityurl)
* [typeMessageEntityEmail](#messageentitytypemessageentityemail)
* [typeMessageEntityBold](#messageentitytypemessageentitybold)
* [typeMessageEntityItalic](#messageentitytypemessageentityitalic)
* [typeMessageEntityCode](#messageentitytypemessageentitycode)
* [typeMessageEntityPre](#messageentitytypemessageentitypre)
* [typeMessageEntityTextUrl](#messageentitytypemessageentitytexturl)
* [typeMessageEntityMentionName](#messageentitytypemessageentitymentionname)
* [typeInputMessageEntityMentionName](#messageentitytypeinputmessageentitymentionname)

## MessageEntity::typeMessageEntityUnknown

#### Schema:

```c++
messageEntityUnknown#bb92ba95 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityMention

#### Schema:

```c++
messageEntityMention#fa04579d offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityHashtag

#### Schema:

```c++
messageEntityHashtag#6f635b0d offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityBotCommand

#### Schema:

```c++
messageEntityBotCommand#6cef8ac7 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityUrl

#### Schema:

```c++
messageEntityUrl#6ed02538 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityEmail

#### Schema:

```c++
messageEntityEmail#64e475c2 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityBold

#### Schema:

```c++
messageEntityBold#bd610bc9 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityItalic

#### Schema:

```c++
messageEntityItalic#826f8b60 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityCode

#### Schema:

```c++
messageEntityCode#28a20571 offset:int length:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|

## MessageEntity::typeMessageEntityPre

#### Schema:

```c++
messageEntityPre#73924be0 offset:int length:int language:string = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|
|language|QString|

## MessageEntity::typeMessageEntityTextUrl

#### Schema:

```c++
messageEntityTextUrl#76a6d327 offset:int length:int url:string = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|
|url|QString|

## MessageEntity::typeMessageEntityMentionName

#### Schema:

```c++
messageEntityMentionName#352dca58 offset:int length:int user_id:int = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|
|userId|qint32|

## MessageEntity::typeInputMessageEntityMentionName

#### Schema:

```c++
inputMessageEntityMentionName#208e68c9 offset:int length:int user_id:InputUser = MessageEntity;
```

#### Parameters:

|Name|Type|
|----|----|
|offset|qint32|
|length|qint32|
|userId|[InputUser](inputuser.md)|

