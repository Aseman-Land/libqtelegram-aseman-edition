# DecryptedMessageMedia

## Types

* [typeDecryptedMessageMediaEmptySecret8](#decryptedmessagemediatypedecryptedmessagemediaemptysecret8)
* [typeDecryptedMessageMediaPhotoSecret8](#decryptedmessagemediatypedecryptedmessagemediaphotosecret8)
* [typeDecryptedMessageMediaVideoSecret8](#decryptedmessagemediatypedecryptedmessagemediavideosecret8)
* [typeDecryptedMessageMediaGeoPointSecret8](#decryptedmessagemediatypedecryptedmessagemediageopointsecret8)
* [typeDecryptedMessageMediaContactSecret8](#decryptedmessagemediatypedecryptedmessagemediacontactsecret8)
* [typeDecryptedMessageMediaDocumentSecret8](#decryptedmessagemediatypedecryptedmessagemediadocumentsecret8)
* [typeDecryptedMessageMediaAudioSecret8](#decryptedmessagemediatypedecryptedmessagemediaaudiosecret8)
* [typeDecryptedMessageMediaVideoSecret17](#decryptedmessagemediatypedecryptedmessagemediavideosecret17)
* [typeDecryptedMessageMediaAudioSecret17](#decryptedmessagemediatypedecryptedmessagemediaaudiosecret17)
* [typeDecryptedMessageMediaExternalDocumentSecret23](#decryptedmessagemediatypedecryptedmessagemediaexternaldocumentsecret23)

## DecryptedMessageMedia::typeDecryptedMessageMediaEmptySecret8

#### Schema:

```c++
decryptedMessageMediaEmpty_Secret8#89f5c4a = DecryptedMessageMedia;
```

#### Parameters:


## DecryptedMessageMedia::typeDecryptedMessageMediaPhotoSecret8

#### Schema:

```c++
decryptedMessageMediaPhoto_Secret8#32798a8c thumb:bytes thumb_w:int thumb_h:int w:int h:int size:int key:bytes iv:bytes = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|thumb|QByteArray|
|thumbW|qint32|
|thumbH|qint32|
|w|qint32|
|h|qint32|
|size|qint32|
|key|QByteArray|
|iv|QByteArray|

## DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret8

#### Schema:

```c++
decryptedMessageMediaVideo_Secret8#4cee6ef3 thumb:bytes thumb_w:int thumb_h:int duration:int w:int h:int size:int key:bytes iv:bytes = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|thumb|QByteArray|
|thumbW|qint32|
|thumbH|qint32|
|duration|qint32|
|w|qint32|
|h|qint32|
|size|qint32|
|key|QByteArray|
|iv|QByteArray|

## DecryptedMessageMedia::typeDecryptedMessageMediaGeoPointSecret8

#### Schema:

```c++
decryptedMessageMediaGeoPoint_Secret8#35480a59 lat:double long:double = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|lat|qreal|
|longValue|qreal|

## DecryptedMessageMedia::typeDecryptedMessageMediaContactSecret8

#### Schema:

```c++
decryptedMessageMediaContact_Secret8#588a0a97 phone_number:string first_name:string last_name:string user_id:int = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|
|userId|qint32|

## DecryptedMessageMedia::typeDecryptedMessageMediaDocumentSecret8

#### Schema:

```c++
decryptedMessageMediaDocument_Secret8#b095434b thumb:bytes thumb_w:int thumb_h:int file_name:string mime_type:string size:int key:bytes iv:bytes = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|thumb|QByteArray|
|thumbW|qint32|
|thumbH|qint32|
|fileName|QString|
|mimeType|QString|
|size|qint32|
|key|QByteArray|
|iv|QByteArray|

## DecryptedMessageMedia::typeDecryptedMessageMediaAudioSecret8

#### Schema:

```c++
decryptedMessageMediaAudio_Secret8#6080758f duration:int size:int key:bytes iv:bytes = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|duration|qint32|
|size|qint32|
|key|QByteArray|
|iv|QByteArray|

## DecryptedMessageMedia::typeDecryptedMessageMediaVideoSecret17

#### Schema:

```c++
decryptedMessageMediaVideo_Secret17#524a415d thumb:bytes thumb_w:int thumb_h:int duration:int mime_type:string w:int h:int size:int key:bytes iv:bytes = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|thumb|QByteArray|
|thumbW|qint32|
|thumbH|qint32|
|duration|qint32|
|mimeType|QString|
|w|qint32|
|h|qint32|
|size|qint32|
|key|QByteArray|
|iv|QByteArray|

## DecryptedMessageMedia::typeDecryptedMessageMediaAudioSecret17

#### Schema:

```c++
decryptedMessageMediaAudio_Secret17#57e0a9cb duration:int mime_type:string size:int key:bytes iv:bytes = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|duration|qint32|
|mimeType|QString|
|size|qint32|
|key|QByteArray|
|iv|QByteArray|

## DecryptedMessageMedia::typeDecryptedMessageMediaExternalDocumentSecret23

#### Schema:

```c++
decryptedMessageMediaExternalDocument_Secret23#fa95b0dd id:long access_hash:long date:int mime_type:string size:int thumb:PhotoSize dc_id:int attributes:Vector<DocumentAttribute> = DecryptedMessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|mimeType|QString|
|size|qint32|
|thumb|[PhotoSize](photosize.md)|
|dcId|qint32|
|attributes|QList&lt;[DocumentAttribute](documentattribute.md)&gt;|

