# InputPeer

## Types

* typeInputPeerEmpty
* typeInputPeerSelf
* typeInputPeerChat
* typeInputPeerUser
* typeInputPeerChannel

## InputPeer::typeInputPeerEmpty

#### Schema:

`inputPeerEmpty#7f3b18ea = InputPeer;`

#### Parameters:


## InputPeer::typeInputPeerSelf

#### Schema:

`inputPeerSelf#7da07ec9 = InputPeer;`

#### Parameters:


## InputPeer::typeInputPeerChat

#### Schema:

`inputPeerChat#179be863 chat_id:int = InputPeer;`

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|

## InputPeer::typeInputPeerUser

#### Schema:

`inputPeerUser#7b8e7de6 user_id:int access_hash:long = InputPeer;`

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|accessHash|qint64|

## InputPeer::typeInputPeerChannel

#### Schema:

`inputPeerChannel#20adaef8 channel_id:int access_hash:long = InputPeer;`

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|accessHash|qint64|

