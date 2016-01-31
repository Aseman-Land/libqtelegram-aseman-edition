# Audio

## Types

* typeAudioEmpty
* typeAudio

## Audio::typeAudioEmpty

#### Schema:

`audioEmpty#586988d8 id:long = Audio;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Audio::typeAudio

#### Schema:

`audio#f9e35055 id:long access_hash:long date:int duration:int mime_type:string size:int dc_id:int = Audio;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|duration|qint32|
|mimeType|QString|
|size|qint32|
|dcId|qint32|

