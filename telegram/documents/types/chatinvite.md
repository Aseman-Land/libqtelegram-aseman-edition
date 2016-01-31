# ChatInvite

## Types

* typeChatInviteAlready
* typeChatInvite

## ChatInvite::typeChatInviteAlready

#### Schema:

`chatInviteAlready#5a686d7c chat:Chat = ChatInvite;`

#### Parameters:

|Name|Type|
|----|----|
|chat|[Chat](chat.md)|

## ChatInvite::typeChatInvite

#### Schema:

`chatInvite#93e99b60 flags:# channel:flags.0?true broadcast:flags.1?true public:flags.2?true megagroup:flags.3?true title:string = ChatInvite;`

#### Parameters:

|Name|Type|
|----|----|
|channel|bool|
|broadcast|bool|
|publicValue|bool|
|megagroup|bool|
|title|QString|
