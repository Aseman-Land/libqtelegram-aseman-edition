# EncryptedMessage

## Types

* [typeEncryptedMessage](#encryptedmessagetypeencryptedmessage)
* [typeEncryptedMessageService](#encryptedmessagetypeencryptedmessageservice)

## EncryptedMessage::typeEncryptedMessage

#### Schema:

```c++
encryptedMessage#ed18c118 random_id:long chat_id:int date:int bytes:bytes file:EncryptedFile = EncryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|randomId|qint64|
|chatId|qint32|
|date|qint32|
|bytes|QByteArray|
|file|[EncryptedFile](encryptedfile.md)|

## EncryptedMessage::typeEncryptedMessageService

#### Schema:

```c++
encryptedMessageService#23734b06 random_id:long chat_id:int date:int bytes:bytes = EncryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|randomId|qint64|
|chatId|qint32|
|date|qint32|
|bytes|QByteArray|

