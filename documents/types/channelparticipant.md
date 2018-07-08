# ChannelParticipant

## Types

* [typeChannelParticipant](#channelparticipanttypechannelparticipant)
* [typeChannelParticipantSelf](#channelparticipanttypechannelparticipantself)
* [typeChannelParticipantCreator](#channelparticipanttypechannelparticipantcreator)
* [typeChannelParticipantAdmin](#channelparticipanttypechannelparticipantadmin)
* [typeChannelParticipantBanned](#channelparticipanttypechannelparticipantbanned)

## ChannelParticipant::typeChannelParticipant

#### Schema:

```c++
channelParticipant#15ebac1d user_id:int date:int = ChannelParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantSelf

#### Schema:

```c++
channelParticipantSelf#a3289a6d user_id:int inviter_id:int date:int = ChannelParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|inviterId|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantCreator

#### Schema:

```c++
channelParticipantCreator#e3e2e1f9 user_id:int = ChannelParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## ChannelParticipant::typeChannelParticipantAdmin

#### Schema:

```c++
channelParticipantAdmin#a82fa898 flags:# can_edit:flags.0?true user_id:int inviter_id:int promoted_by:int date:int admin_rights:ChannelAdminRights = ChannelParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|canEdit|bool|
|userId|qint32|
|inviterId|qint32|
|promotedBy|qint32|
|date|qint32|
|adminRights|[ChannelAdminRights](channeladminrights.md)|

## ChannelParticipant::typeChannelParticipantBanned

#### Schema:

```c++
channelParticipantBanned#222c1886 flags:# left:flags.0?true user_id:int kicked_by:int date:int banned_rights:ChannelBannedRights = ChannelParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|left|bool|
|userId|qint32|
|kickedBy|qint32|
|date|qint32|
|bannedRights|[ChannelBannedRights](channelbannedrights.md)|

