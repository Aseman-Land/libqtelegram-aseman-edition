# EncryptedChat

## Types

* typeEncryptedChatEmpty
* typeEncryptedChatWaiting
* typeEncryptedChatRequested
* typeEncryptedChat
* typeEncryptedChatDiscarded

## EncryptedChat::typeEncryptedChatEmpty

#### Schema:

`encryptedChatEmpty#ab7ec0a0 id:int = EncryptedChat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## EncryptedChat::typeEncryptedChatWaiting

#### Schema:

`encryptedChatWaiting#3bf703dc id:int access_hash:long date:int admin_id:int participant_id:int = EncryptedChat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|

## EncryptedChat::typeEncryptedChatRequested

#### Schema:

`encryptedChatRequested#c878527e id:int access_hash:long date:int admin_id:int participant_id:int g_a:bytes = EncryptedChat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|
|gA|QByteArray|

## EncryptedChat::typeEncryptedChat

#### Schema:

`encryptedChat#fa56ce36 id:int access_hash:long date:int admin_id:int participant_id:int g_a_or_b:bytes key_fingerprint:long = EncryptedChat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|
|gAOrB|QByteArray|
|keyFingerprint|qint64|

## EncryptedChat::typeEncryptedChatDiscarded

#### Schema:

`encryptedChatDiscarded#13d6dd27 id:int = EncryptedChat;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

