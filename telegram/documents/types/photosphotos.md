# PhotosPhotos

## Types

* [typePhotosPhotos](#photosphotostypephotosphotos)
* [typePhotosPhotosSlice](#photosphotostypephotosphotosslice)

## PhotosPhotos::typePhotosPhotos

#### Schema:

```c++
photos.photos#8dca6aa5 photos:Vector<Photo> users:Vector<User> = photos.Photos;
```

#### Parameters:

|Name|Type|
|----|----|
|photos|QList&lt;[Photo](photo.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

## PhotosPhotos::typePhotosPhotosSlice

#### Schema:

```c++
photos.photosSlice#15051f54 count:int photos:Vector<Photo> users:Vector<User> = photos.Photos;
```

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|photos|QList&lt;[Photo](photo.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

