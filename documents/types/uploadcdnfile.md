# UploadCdnFile

## Types

* [typeUploadCdnFileReuploadNeeded](#uploadcdnfiletypeuploadcdnfilereuploadneeded)
* [typeUploadCdnFile](#uploadcdnfiletypeuploadcdnfile)

## UploadCdnFile::typeUploadCdnFileReuploadNeeded

#### Schema:

```c++
upload.cdnFileReuploadNeeded#eea8e46e request_token:bytes = upload.CdnFile;
```

#### Parameters:

|Name|Type|
|----|----|
|requestToken|QByteArray|

## UploadCdnFile::typeUploadCdnFile

#### Schema:

```c++
upload.cdnFile#a99fca4f bytes:bytes = upload.CdnFile;
```

#### Parameters:

|Name|Type|
|----|----|
|bytes|QByteArray|

