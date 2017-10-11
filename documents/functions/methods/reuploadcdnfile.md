# Upload.reuploadCdnFile

## Function:

TelegramCore::uploadReuploadCdnFile

## Schema:

```c++
upload.reuploadCdnFile#2e7a2020 file_token:bytes request_token:bytes = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|fileToken|QByteArray||
|requestToken|QByteArray||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
reuploadCdnFileAnswer(qint64 msgId, bool  result)
```
```c++
reuploadCdnFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReuploadCdnFileAnswer(qint64 msgId, bool  result)
```
```c++
onReuploadCdnFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REUPLOAD_CDN_FILE_CALLBACK

## Examples:

```c++
tg->reuploadCdnFile(file_token, request_token, [=](TG_REUPLOAD_CDN_FILE_CALLBACK){
    ...
}, 30000);
```
