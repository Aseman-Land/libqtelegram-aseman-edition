# ChatParticipant

## Types

* [typeChatParticipant](#chatparticipanttypechatparticipant)
* [typeChatParticipantCreator](#chatparticipanttypechatparticipantcreator)
* [typeChatParticipantAdmin](#chatparticipanttypechatparticipantadmin)

## ChatParticipant::typeChatParticipant

#### Schema:

```c++
chatParticipant#c8d7493e user_id:int inviter_id:int date:int = ChatParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|inviterId|qint32|
|date|qint32|

## ChatParticipant::typeChatParticipantCreator

#### Schema:

```c++
chatParticipantCreator#da13538a user_id:int = ChatParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## ChatParticipant::typeChatParticipantAdmin

#### Schema:

```c++
chatParticipantAdmin#e2d6e436 user_id:int inviter_id:int date:int = ChatParticipant;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|inviterId|qint32|
|date|qint32|

