# BotInfo

## Types

* [typeBotInfoEmpty](#botinfotypebotinfoempty)
* [typeBotInfo](#botinfotypebotinfo)

## BotInfo::typeBotInfoEmpty

#### Schema:

`botInfoEmpty#bb2e37ce = BotInfo;`

#### Parameters:


## BotInfo::typeBotInfo

#### Schema:

`botInfo#9cf585d user_id:int version:int share_text:string description:string commands:Vector<BotCommand> = BotInfo;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|version|qint32|
|shareText|QString|
|description|QString|
|commands|QList<BotCommand>|

