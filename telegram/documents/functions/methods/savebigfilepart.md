# Upload.saveBigFilePart

## Function:

TelegramCore::uploadSaveBigFilePart

## Schema:

`upload.saveBigFilePart#de7b673d file_id:long file_part:int file_total_parts:int bytes:bytes = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|fileId|qint64||
|filePart|qint32||
|fileTotalParts|qint32||
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

* `saveBigFilePartAnswer(qint64 msgId, bool  result)`
* `saveBigFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSaveBigFilePartAnswer(qint64 msgId, bool  result)`
* `onSaveBigFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SAVE_BIG_FILE_PART_CALLBACK

## Examples:

`tg->saveBigFilePart(file_id, file_part, file_total_parts, bytes, [=](TG_SAVE_BIG_FILE_PART_CALLBACK){
    ...
}, 30000);`
