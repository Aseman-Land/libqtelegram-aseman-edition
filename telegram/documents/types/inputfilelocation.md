# InputFileLocation

## Types

* [typeInputFileLocation](#inputfilelocationtypeinputfilelocation)
* [typeInputVideoFileLocation](#inputfilelocationtypeinputvideofilelocation)
* [typeInputEncryptedFileLocation](#inputfilelocationtypeinputencryptedfilelocation)
* [typeInputAudioFileLocation](#inputfilelocationtypeinputaudiofilelocation)
* [typeInputDocumentFileLocation](#inputfilelocationtypeinputdocumentfilelocation)

## InputFileLocation::typeInputFileLocation

#### Schema:

`inputFileLocation#14637196 volume_id:long local_id:int secret:long = InputFileLocation;`

#### Parameters:

|Name|Type|
|----|----|
|volumeId|qint64|
|localId|qint32|
|secret|qint64|

## InputFileLocation::typeInputVideoFileLocation

#### Schema:

`inputVideoFileLocation#3d0364ec id:long access_hash:long = InputFileLocation;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

## InputFileLocation::typeInputEncryptedFileLocation

#### Schema:

`inputEncryptedFileLocation#f5235d55 id:long access_hash:long = InputFileLocation;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

## InputFileLocation::typeInputAudioFileLocation

#### Schema:

`inputAudioFileLocation#74dc404d id:long access_hash:long = InputFileLocation;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

## InputFileLocation::typeInputDocumentFileLocation

#### Schema:

`inputDocumentFileLocation#4e45abe9 id:long access_hash:long = InputFileLocation;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

