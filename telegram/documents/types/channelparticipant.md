# ChannelParticipant

## Types

* [typeChannelParticipant](#channelparticipanttypechannelparticipant)
* [typeChannelParticipantSelf](#channelparticipanttypechannelparticipantself)
* [typeChannelParticipantModerator](#channelparticipanttypechannelparticipantmoderator)
* [typeChannelParticipantEditor](#channelparticipanttypechannelparticipanteditor)
* [typeChannelParticipantKicked](#channelparticipanttypechannelparticipantkicked)
* [typeChannelParticipantCreator](#channelparticipanttypechannelparticipantcreator)

## ChannelParticipant::typeChannelParticipant

#### Schema:

`channelParticipant#15ebac1d user_id:int date:int = ChannelParticipant;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantSelf

#### Schema:

`channelParticipantSelf#a3289a6d user_id:int inviter_id:int date:int = ChannelParticipant;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|inviterId|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantModerator

#### Schema:

`channelParticipantModerator#91057fef user_id:int inviter_id:int date:int = ChannelParticipant;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|inviterId|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantEditor

#### Schema:

`channelParticipantEditor#98192d61 user_id:int inviter_id:int date:int = ChannelParticipant;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|inviterId|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantKicked

#### Schema:

`channelParticipantKicked#8cc5e69a user_id:int kicked_by:int date:int = ChannelParticipant;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|kickedBy|qint32|
|date|qint32|

## ChannelParticipant::typeChannelParticipantCreator

#### Schema:

`channelParticipantCreator#e3e2e1f9 user_id:int = ChannelParticipant;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

