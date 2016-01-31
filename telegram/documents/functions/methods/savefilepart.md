# Upload.saveFilePart

## Function:

TelegramCore::uploadSaveFilePart

## Schema:

`upload.saveFilePart#b304a621 file_id:long file_part:int bytes:bytes = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|fileId|qint64||
|filePart|qint32||
|bytes|QByteArray||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `saveFilePartAnswer(qint64 msgId, bool  result)`
* `saveFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSaveFilePartAnswer(qint64 msgId, bool  result)`
* `onSaveFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SAVE_FILE_PART_CALLBACK

## Examples:

`tg->saveFilePart(file_id, file_part, bytes, [=](TG_SAVE_FILE_PART_CALLBACK){
    ...
}, 30000);`
