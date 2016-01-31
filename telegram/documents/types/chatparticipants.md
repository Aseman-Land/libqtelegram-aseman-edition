# ChatParticipants

## Types

* [typeChatParticipantsForbidden](#chatparticipantstypechatparticipantsforbidden)
* [typeChatParticipants](#chatparticipantstypechatparticipants)

## ChatParticipants::typeChatParticipantsForbidden

#### Schema:

`chatParticipantsForbidden#fc900c2b flags:# chat_id:int self_participant:flags.0?ChatParticipant = ChatParticipants;`

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|selfParticipant|[ChatParticipant](chatparticipant.md)|

## ChatParticipants::typeChatParticipants

#### Schema:

`chatParticipants#3f460fed chat_id:int participants:Vector<ChatParticipant> version:int = ChatParticipants;`

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|participants|QList<ChatParticipant>|
|version|qint32|

