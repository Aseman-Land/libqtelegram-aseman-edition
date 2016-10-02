# MessagesSentEncryptedMessage

## Types

* [typeMessagesSentEncryptedMessage](#messagessentencryptedmessagetypemessagessentencryptedmessage)
* [typeMessagesSentEncryptedFile](#messagessentencryptedmessagetypemessagessentencryptedfile)

## MessagesSentEncryptedMessage::typeMessagesSentEncryptedMessage

#### Schema:

```c++
messages.sentEncryptedMessage#560f8935 date:int = messages.SentEncryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|date|qint32|

## MessagesSentEncryptedMessage::typeMessagesSentEncryptedFile

#### Schema:

```c++
messages.sentEncryptedFile#9493ff32 date:int file:EncryptedFile = messages.SentEncryptedMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|date|qint32|
|file|[EncryptedFile](encryptedfile.md)|

