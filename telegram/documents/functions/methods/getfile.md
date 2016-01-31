# Upload.getFile

## Function:

TelegramCore::uploadGetFile

## Schema:

```c++
upload.getFile#e3a6cfb5 location:InputFileLocation offset:int limit:int = upload.File;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|location|[InputFileLocation](../../types/inputfilelocation.md)||
|offset|qint32||
|limit|qint32||
|callBack|Callback&lt;[UploadFile](../../types/uploadfile.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UploadFile](../../types/uploadfile.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getFileAnswer(qint64 msgId, const UploadFile & result)
```
```c++
getFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetFileAnswer(qint64 msgId, const UploadFile & result)
```
```c++
onGetFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_FILE_CALLBACK

## Examples:

```c++
tg->getFile(location, offset, limit, [=](TG_GET_FILE_CALLBACK){
    ...
}, 30000);
```
