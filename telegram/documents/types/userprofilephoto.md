# UserProfilePhoto

## Types

* [typeUserProfilePhotoEmpty](#userprofilephototypeuserprofilephotoempty)
* [typeUserProfilePhoto](#userprofilephototypeuserprofilephoto)

## UserProfilePhoto::typeUserProfilePhotoEmpty

#### Schema:

```c++
userProfilePhotoEmpty#4f11bae1 = UserProfilePhoto;
```

#### Parameters:


## UserProfilePhoto::typeUserProfilePhoto

#### Schema:

```c++
userProfilePhoto#d559d8c8 photo_id:long photo_small:FileLocation photo_big:FileLocation = UserProfilePhoto;
```

#### Parameters:

|Name|Type|
|----|----|
|photoId|qint64|
|photoSmall|[FileLocation](filelocation.md)|
|photoBig|[FileLocation](filelocation.md)|

