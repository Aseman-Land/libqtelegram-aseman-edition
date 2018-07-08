# ChannelAdminLogEventAction

## Types

* [typeChannelAdminLogEventActionChangeTitle](#channeladminlogeventactiontypechanneladminlogeventactionchangetitle)
* [typeChannelAdminLogEventActionChangeAbout](#channeladminlogeventactiontypechanneladminlogeventactionchangeabout)
* [typeChannelAdminLogEventActionChangeUsername](#channeladminlogeventactiontypechanneladminlogeventactionchangeusername)
* [typeChannelAdminLogEventActionChangePhoto](#channeladminlogeventactiontypechanneladminlogeventactionchangephoto)
* [typeChannelAdminLogEventActionToggleInvites](#channeladminlogeventactiontypechanneladminlogeventactiontoggleinvites)
* [typeChannelAdminLogEventActionToggleSignatures](#channeladminlogeventactiontypechanneladminlogeventactiontogglesignatures)
* [typeChannelAdminLogEventActionUpdatePinned](#channeladminlogeventactiontypechanneladminlogeventactionupdatepinned)
* [typeChannelAdminLogEventActionEditMessage](#channeladminlogeventactiontypechanneladminlogeventactioneditmessage)
* [typeChannelAdminLogEventActionDeleteMessage](#channeladminlogeventactiontypechanneladminlogeventactiondeletemessage)
* [typeChannelAdminLogEventActionParticipantJoin](#channeladminlogeventactiontypechanneladminlogeventactionparticipantjoin)
* [typeChannelAdminLogEventActionParticipantLeave](#channeladminlogeventactiontypechanneladminlogeventactionparticipantleave)
* [typeChannelAdminLogEventActionParticipantInvite](#channeladminlogeventactiontypechanneladminlogeventactionparticipantinvite)
* [typeChannelAdminLogEventActionParticipantToggleBan](#channeladminlogeventactiontypechanneladminlogeventactionparticipanttoggleban)
* [typeChannelAdminLogEventActionParticipantToggleAdmin](#channeladminlogeventactiontypechanneladminlogeventactionparticipanttoggleadmin)

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionChangeTitle

#### Schema:

```c++
channelAdminLogEventActionChangeTitle#e6dfb825 prev_value:string new_value:string = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevValue|QString|
|newValue|QString|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionChangeAbout

#### Schema:

```c++
channelAdminLogEventActionChangeAbout#55188a2e prev_value:string new_value:string = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevValue|QString|
|newValue|QString|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionChangeUsername

#### Schema:

```c++
channelAdminLogEventActionChangeUsername#6a4afc38 prev_value:string new_value:string = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevValue|QString|
|newValue|QString|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionChangePhoto

#### Schema:

```c++
channelAdminLogEventActionChangePhoto#b82f55c3 prev_photo:ChatPhoto new_photo:ChatPhoto = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevPhoto|[ChatPhoto](chatphoto.md)|
|newPhoto|[ChatPhoto](chatphoto.md)|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionToggleInvites

#### Schema:

```c++
channelAdminLogEventActionToggleInvites#1b7907ae new_value:Bool = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|newValue|bool|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionToggleSignatures

#### Schema:

```c++
channelAdminLogEventActionToggleSignatures#26ae0971 new_value:Bool = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|newValue|bool|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionUpdatePinned

#### Schema:

```c++
channelAdminLogEventActionUpdatePinned#e9e82c18 message:Message = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[Message](message.md)|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionEditMessage

#### Schema:

```c++
channelAdminLogEventActionEditMessage#709b2405 prev_message:Message new_message:Message = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevMessage|[Message](message.md)|
|newMessage|[Message](message.md)|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionDeleteMessage

#### Schema:

```c++
channelAdminLogEventActionDeleteMessage#42e047bb message:Message = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[Message](message.md)|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionParticipantJoin

#### Schema:

```c++
channelAdminLogEventActionParticipantJoin#183040d3 = ChannelAdminLogEventAction;
```

#### Parameters:


## ChannelAdminLogEventAction::typeChannelAdminLogEventActionParticipantLeave

#### Schema:

```c++
channelAdminLogEventActionParticipantLeave#f89777f2 = ChannelAdminLogEventAction;
```

#### Parameters:


## ChannelAdminLogEventAction::typeChannelAdminLogEventActionParticipantInvite

#### Schema:

```c++
channelAdminLogEventActionParticipantInvite#e31c34d8 participant:ChannelParticipant = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|participant|[ChannelParticipant](channelparticipant.md)|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionParticipantToggleBan

#### Schema:

```c++
channelAdminLogEventActionParticipantToggleBan#e6d83d7e prev_participant:ChannelParticipant new_participant:ChannelParticipant = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevParticipant|[ChannelParticipant](channelparticipant.md)|
|newParticipant|[ChannelParticipant](channelparticipant.md)|

## ChannelAdminLogEventAction::typeChannelAdminLogEventActionParticipantToggleAdmin

#### Schema:

```c++
channelAdminLogEventActionParticipantToggleAdmin#d5676710 prev_participant:ChannelParticipant new_participant:ChannelParticipant = ChannelAdminLogEventAction;
```

#### Parameters:

|Name|Type|
|----|----|
|prevParticipant|[ChannelParticipant](channelparticipant.md)|
|newParticipant|[ChannelParticipant](channelparticipant.md)|

