# DecryptedMessage

## Types

* [typeDecryptedMessageSecret8](#decryptedmessagetypedecryptedmessagesecret8)
* [typeDecryptedMessageServiceSecret8](#decryptedmessagetypedecryptedmessageservicesecret8)
* [typeDecryptedMessageSecret17](#decryptedmessagetypedecryptedmessagesecret17)
* [typeDecryptedMessageServiceSecret17](#decryptedmessagetypedecryptedmessageservicesecret17)

## DecryptedMessage::typeDecryptedMessageSecret8

#### Schema:

```c++
decryptedMessage_Secret8#1f814f1f random_id:long random_bytes:bytes message:string media:DecryptedMessageMedia = DecryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|randomId|qint64|
|randomBytes|QByteArray|
|message|QString|
|media|[DecryptedMessageMedia](decryptedmessagemedia.md)|

## DecryptedMessage::typeDecryptedMessageServiceSecret8

#### Schema:

```c++
decryptedMessageService_Secret8#aa48327d random_id:long random_bytes:bytes action:DecryptedMessageAction = DecryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|randomId|qint64|
|randomBytes|QByteArray|
|action|[DecryptedMessageAction](decryptedmessageaction.md)|

## DecryptedMessage::typeDecryptedMessageSecret17

#### Schema:

```c++
decryptedMessage_Secret17#204d3878 random_id:long ttl:int message:string media:DecryptedMessageMedia = DecryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|randomId|qint64|
|ttl|qint32|
|message|QString|
|media|[DecryptedMessageMedia](decryptedmessagemedia.md)|

## DecryptedMessage::typeDecryptedMessageServiceSecret17

#### Schema:

```c++
decryptedMessageService_Secret17#73164160 random_id:long action:DecryptedMessageAction = DecryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|randomId|qint64|
|action|[DecryptedMessageAction](decryptedmessageaction.md)|

