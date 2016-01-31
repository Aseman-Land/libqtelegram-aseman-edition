# Chat

## Types

* typeChatEmpty
* typeChat
* typeChatForbidden
* typeChannel
* typeChannelForbidden

## Chat::typeChatEmpty

#### Schema:

`chatEmpty#9ba2d800 id:int = Chat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## Chat::typeChat

#### Schema:

`chat#d91cdd54 flags:# creator:flags.0?true kicked:flags.1?true left:flags.2?true admins_enabled:flags.3?true admin:flags.4?true deactivated:flags.5?true id:int title:string photo:ChatPhoto participants_count:int date:int version:int migrated_to:flags.6?InputChannel = Chat;`

#### Parameters:

|Name|Type|
|----|----|
|creator|bool|
|kicked|bool|
|left|bool|
|adminsEnabled|bool|
|admin|bool|
|deactivated|bool|
|id|qint32|
|title|QString|
|photo|[ChatPhoto](chatphoto.md)|
|participantsCount|qint32|
|date|qint32|
|version|qint32|
|migratedTo|[InputChannel](inputchannel.md)|

## Chat::typeChatForbidden

#### Schema:

`chatForbidden#7328bdb id:int title:string = Chat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|title|QString|

## Chat::typeChannel

#### Schema:

`channel#4b1b7506 flags:# creator:flags.0?true kicked:flags.1?true left:flags.2?true editor:flags.3?true moderator:flags.4?true broadcast:flags.5?true verified:flags.7?true megagroup:flags.8?true restricted:flags.9?true id:int access_hash:long title:string username:flags.6?string photo:ChatPhoto date:int version:int restriction_reason:flags.9?string = Chat;`

#### Parameters:

|Name|Type|
|----|----|
|creator|bool|
|kicked|bool|
|left|bool|
|editor|bool|
|moderator|bool|
|broadcast|bool|
|verified|bool|
|megagroup|bool|
|restricted|bool|
|id|qint32|
|accessHash|qint64|
|title|QString|
|username|QString|
|photo|[ChatPhoto](chatphoto.md)|
|date|qint32|
|version|qint32|
|restrictionReason|QString|

## Chat::typeChannelForbidden

#### Schema:

`channelForbidden#2d85832c id:int access_hash:long title:string = Chat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|accessHash|qint64|
|title|QString|

