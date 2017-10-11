# UploadFile

## Types

* [typeUploadFile](#uploadfiletypeuploadfile)
* [typeUploadFileCdnRedirect](#uploadfiletypeuploadfilecdnredirect)

## UploadFile::typeUploadFile

#### Schema:

```c++
upload.file#96a18d5 type:storage.FileType mtime:int bytes:bytes = upload.File;
```

#### Parameters:

|Name|Type|
|----|----|
|type|[StorageFileType](storagefiletype.md)|
|mtime|qint32|
|bytes|QByteArray|

## UploadFile::typeUploadFileCdnRedirect

#### Schema:

```c++
upload.fileCdnRedirect#1508485a dc_id:int file_token:bytes encryption_key:bytes encryption_iv:bytes = upload.File;
```

#### Parameters:

|Name|Type|
|----|----|
|dcId|qint32|
|fileToken|QByteArray|
|encryptionKey|QByteArray|
|encryptionIv|QByteArray|

