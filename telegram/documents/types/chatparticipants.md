# ChatParticipants

## Types

* [typeChatParticipantsForbidden](#chatparticipantstypechatparticipantsforbidden)
* [typeChatParticipants](#chatparticipantstypechatparticipants)

## ChatParticipants::typeChatParticipantsForbidden

#### Schema:

```c++
chatParticipantsForbidden#fc900c2b flags:# chat_id:int self_participant:flags.0?ChatParticipant = ChatParticipants;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|selfParticipant|[ChatParticipant](chatparticipant.md)|

## ChatParticipants::typeChatParticipants

#### Schema:

```c++
chatParticipants#3f460fed chat_id:int participants:Vector<ChatParticipant> version:int = ChatParticipants;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|participants|QList&lt;[ChatParticipant](chatparticipant.md)&gt;|
|version|qint32|

