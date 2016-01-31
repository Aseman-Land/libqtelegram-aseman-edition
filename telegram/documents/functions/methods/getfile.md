# Upload.getFile

## Function:

TelegramCore::uploadGetFile

## Schema:

`upload.getFile#e3a6cfb5 location:InputFileLocation offset:int limit:int = upload.File;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|location|[InputFileLocation](../../types/inputfilelocation.md)||
|offset|qint32||
|limit|qint32||
|callBack|Callback<UploadFile\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UploadFile](../../types/uploadfile.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getFileAnswer(qint64 msgId, const UploadFile & result)`
* `getFileError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetFileAnswer(qint64 msgId, const UploadFile & result)`
* `onGetFileError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_FILE_CALLBACK

## Examples:

`tg->getFile(location, offset, limit, [=](TG_GET_FILE_CALLBACK){
    ...
}, 30000);`
