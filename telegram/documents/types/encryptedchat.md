# EncryptedChat

## Types

* [typeEncryptedChatEmpty](#encryptedchattypeencryptedchatempty)
* [typeEncryptedChatWaiting](#encryptedchattypeencryptedchatwaiting)
* [typeEncryptedChatRequested](#encryptedchattypeencryptedchatrequested)
* [typeEncryptedChat](#encryptedchattypeencryptedchat)
* [typeEncryptedChatDiscarded](#encryptedchattypeencryptedchatdiscarded)

## EncryptedChat::typeEncryptedChatEmpty

#### Schema:

```c++
encryptedChatEmpty#ab7ec0a0 id:int = EncryptedChat;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## EncryptedChat::typeEncryptedChatWaiting

#### Schema:

```c++
encryptedChatWaiting#3bf703dc id:int access_hash:long date:int admin_id:int participant_id:int = EncryptedChat;
```

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

```c++
encryptedChatRequested#c878527e id:int access_hash:long date:int admin_id:int participant_id:int g_a:bytes = EncryptedChat;
```

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

```c++
encryptedChat#fa56ce36 id:int access_hash:long date:int admin_id:int participant_id:int g_a_or_b:bytes key_fingerprint:long = EncryptedChat;
```

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

```c++
encryptedChatDiscarded#13d6dd27 id:int = EncryptedChat;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

