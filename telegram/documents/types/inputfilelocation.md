# InputFileLocation

## Types

* [typeInputFileLocation](#inputfilelocationtypeinputfilelocation)
* [typeInputEncryptedFileLocation](#inputfilelocationtypeinputencryptedfilelocation)
* [typeInputDocumentFileLocation](#inputfilelocationtypeinputdocumentfilelocation)

## InputFileLocation::typeInputFileLocation

#### Schema:

```c++
inputFileLocation#14637196 volume_id:long local_id:int secret:long = InputFileLocation;
```

#### Parameters:

|Name|Type|
|----|----|
|volumeId|qint64|
|localId|qint32|
|secret|qint64|

## InputFileLocation::typeInputEncryptedFileLocation

#### Schema:

```c++
inputEncryptedFileLocation#f5235d55 id:long access_hash:long = InputFileLocation;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

## InputFileLocation::typeInputDocumentFileLocation

#### Schema:

```c++
inputDocumentFileLocation#4e45abe9 id:long access_hash:long = InputFileLocation;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

