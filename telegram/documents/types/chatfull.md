# ChatFull

## Types

* typeChatFull
* typeChannelFull

## ChatFull::typeChatFull

#### Schema:

`chatFull#2e02a614 id:int participants:ChatParticipants chat_photo:Photo notify_settings:PeerNotifySettings exported_invite:ExportedChatInvite bot_info:Vector<BotInfo> = ChatFull;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|participants|[ChatParticipants](chatparticipants.md)|
|chatPhoto|[Photo](photo.md)|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|
|exportedInvite|[ExportedChatInvite](exportedchatinvite.md)|
|botInfo|QList<BotInfo>|

## ChatFull::typeChannelFull

#### Schema:

`channelFull#9e341ddf flags:# can_view_participants:flags.3?true id:int about:string participants_count:flags.0?int admins_count:flags.1?int kicked_count:flags.2?int read_inbox_max_id:int unread_count:int unread_important_count:int chat_photo:Photo notify_settings:PeerNotifySettings exported_invite:ExportedChatInvite bot_info:Vector<BotInfo> migrated_from_chat_id:flags.4?int migrated_from_max_id:flags.4?int = ChatFull;`

#### Parameters:

|Name|Type|
|----|----|
|canViewParticipants|bool|
|id|qint32|
|about|QString|
|participantsCount|qint32|
|adminsCount|qint32|
|kickedCount|qint32|
|readInboxMaxId|qint32|
|unreadCount|qint32|
|unreadImportantCount|qint32|
|chatPhoto|[Photo](photo.md)|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|
|exportedInvite|[ExportedChatInvite](exportedchatinvite.md)|
|botInfo|QList<BotInfo>|
|migratedFromChatId|qint32|
|migratedFromMaxId|qint32|

