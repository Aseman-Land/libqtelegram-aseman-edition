# Photo

## Types

* [typePhotoEmpty](#phototypephotoempty)
* [typePhoto](#phototypephoto)

## Photo::typePhotoEmpty

#### Schema:

`photoEmpty#2331b22d id:long = Photo;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Photo::typePhoto

#### Schema:

`photo#cded42fe id:long access_hash:long date:int sizes:Vector<PhotoSize> = Photo;`

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|sizes|QList<PhotoSize>|

