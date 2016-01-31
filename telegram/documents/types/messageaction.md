# MessageAction

## Types

* typeMessageActionEmpty
* typeMessageActionChatCreate
* typeMessageActionChatEditTitle
* typeMessageActionChatEditPhoto
* typeMessageActionChatDeletePhoto
* typeMessageActionChatAddUser
* typeMessageActionChatDeleteUser
* typeMessageActionChatJoinedByLink
* typeMessageActionChannelCreate
* typeMessageActionChatMigrateTo
* typeMessageActionChannelMigrateFrom

## MessageAction::typeMessageActionEmpty

#### Schema:

`messageActionEmpty#b6aef7b0 = MessageAction;`

#### Parameters:


## MessageAction::typeMessageActionChatCreate

#### Schema:

`messageActionChatCreate#a6638b9a title:string users:Vector<int> = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|title|QString|
|users|QList<qint32>|

## MessageAction::typeMessageActionChatEditTitle

#### Schema:

`messageActionChatEditTitle#b5a1ce5a title:string = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|title|QString|

## MessageAction::typeMessageActionChatEditPhoto

#### Schema:

`messageActionChatEditPhoto#7fcb13a8 photo:Photo = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|photo|[Photo](photo.md)|

## MessageAction::typeMessageActionChatDeletePhoto

#### Schema:

`messageActionChatDeletePhoto#95e3fbef = MessageAction;`

#### Parameters:


## MessageAction::typeMessageActionChatAddUser

#### Schema:

`messageActionChatAddUser#488a7337 users:Vector<int> = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|users|QList<qint32>|

## MessageAction::typeMessageActionChatDeleteUser

#### Schema:

`messageActionChatDeleteUser#b2ae9b0c user_id:int = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## MessageAction::typeMessageActionChatJoinedByLink

#### Schema:

`messageActionChatJoinedByLink#f89cf5e8 inviter_id:int = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|inviterId|qint32|

## MessageAction::typeMessageActionChannelCreate

#### Schema:

`messageActionChannelCreate#95d2ac92 title:string = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|title|QString|

## MessageAction::typeMessageActionChatMigrateTo

#### Schema:

`messageActionChatMigrateTo#51bdb021 channel_id:int = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|

## MessageAction::typeMessageActionChannelMigrateFrom

#### Schema:

`messageActionChannelMigrateFrom#b055eaee title:string chat_id:int = MessageAction;`

#### Parameters:

|Name|Type|
|----|----|
|title|QString|
|chatId|qint32|

