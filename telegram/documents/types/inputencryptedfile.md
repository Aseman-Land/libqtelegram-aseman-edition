# InputEncryptedFile

## Types

* [typeInputEncryptedFileEmpty](#inputencryptedfiletypeinputencryptedfileempty)
* [typeInputEncryptedFileUploaded](#inputencryptedfiletypeinputencryptedfileuploaded)
* [typeInputEncryptedFile](#inputencryptedfiletypeinputencryptedfile)
* [typeInputEncryptedFileBigUploaded](#inputencryptedfiletypeinputencryptedfilebiguploaded)

## InputEncryptedFile::typeInputEncryptedFileEmpty

#### Schema:

`inputEncryptedFileEmpty#1837c364 = InputEncryptedFile;`

#### Parameters:


## InputEncryptedFile::typeInputEncryptedFileUploaded

#### Schema:

`inputEncryptedFileUploaded#64bd0306 id:long parts:int md5_checksum:string key_fingerprint:int = InputEncryptedFile;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|parts|qint32|
|md5Checksum|QString|
|keyFingerprint|qint32|

## InputEncryptedFile::typeInputEncryptedFile

#### Schema:

`inputEncryptedFile#5a17b5e5 id:long access_hash:long = InputEncryptedFile;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

## InputEncryptedFile::typeInputEncryptedFileBigUploaded

#### Schema:

`inputEncryptedFileBigUploaded#2dc173c8 id:long parts:int key_fingerprint:int = InputEncryptedFile;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|parts|qint32|
|keyFingerprint|qint32|

