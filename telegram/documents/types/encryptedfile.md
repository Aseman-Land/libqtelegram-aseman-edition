# EncryptedFile

## Types

* [typeEncryptedFileEmpty](#encryptedfiletypeencryptedfileempty)
* [typeEncryptedFile](#encryptedfiletypeencryptedfile)

## EncryptedFile::typeEncryptedFileEmpty

#### Schema:

`encryptedFileEmpty#c21f497e = EncryptedFile;`

#### Parameters:


## EncryptedFile::typeEncryptedFile

#### Schema:

`encryptedFile#4a70994c id:long access_hash:long size:int dc_id:int key_fingerprint:int = EncryptedFile;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|size|qint32|
|dcId|qint32|
|keyFingerprint|qint32|

