# FileLocation

## Types

* [typeFileLocationUnavailable](#filelocationtypefilelocationunavailable)
* [typeFileLocation](#filelocationtypefilelocation)

## FileLocation::typeFileLocationUnavailable

#### Schema:

```c++
fileLocationUnavailable#7c596b46 volume_id:long local_id:int secret:long = FileLocation;
```

#### Parameters:

|Name|Type|
|----|----|
|volumeId|qint64|
|localId|qint32|
|secret|qint64|

## FileLocation::typeFileLocation

#### Schema:

```c++
fileLocation#53d69076 dc_id:int volume_id:long local_id:int secret:long = FileLocation;
```

#### Parameters:

|Name|Type|
|----|----|
|dcId|qint32|
|volumeId|qint64|
|localId|qint32|
|secret|qint64|

