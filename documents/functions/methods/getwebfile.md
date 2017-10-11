# Upload.getWebFile

## Function:

TelegramCore::uploadGetWebFile

## Schema:

```c++
upload.getWebFile#24e6818d location:InputWebFileLocation offset:int limit:int = upload.WebFile;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|location|[InputWebFileLocation](../../types/inputwebfilelocation.md)||
|offset|qint32||
|limit|qint32||
|callBack|Callback&lt;[UploadWebFile](../../types/uploadwebfile.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UploadWebFile](../../types/uploadwebfile.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getWebFileAnswer(qint64 msgId, const UploadWebFile & result)
```
```c++
getWebFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetWebFileAnswer(qint64 msgId, const UploadWebFile & result)
```
```c++
onGetWebFileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_WEB_FILE_CALLBACK

## Examples:

```c++
tg->getWebFile(location, offset, limit, [=](TG_GET_WEB_FILE_CALLBACK){
    ...
}, 30000);
```
