# Upload.getCdnFile

## Function:

TelegramCore::uploadGetCdnFile

## Schema:

```c++
upload.getCdnFile#2000bcc3 file_token:bytes offset:int limit:int = upload.CdnFile;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|fileToken|QByteArray||
|offset|qint32||
|limit|qint32||
|callBack|Callback&lt;[UploadCdnFile](../../types/uploadcdnfile.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UploadCdnFile](../../types/uploadcdnfile.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getCdnFileAnswer(qint64 msgId, const UploadCdnFile & result)
```
```c++
getCdnFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetCdnFileAnswer(qint64 msgId, const UploadCdnFile & result)
```
```c++
onGetCdnFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CDN_FILE_CALLBACK

## Examples:

```c++
tg->getCdnFile(file_token, offset, limit, [=](TG_GET_CDN_FILE_CALLBACK){
    ...
}, 30000);
```
