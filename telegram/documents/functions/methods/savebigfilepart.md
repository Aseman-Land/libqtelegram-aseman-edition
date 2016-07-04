# Upload.saveBigFilePart

## Function:

TelegramCore::uploadSaveBigFilePart

## Schema:

```c++
upload.saveBigFilePart#de7b673d file_id:long file_part:int file_total_parts:int bytes:bytes = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|fileId|qint64||
|filePart|qint32||
|fileTotalParts|qint32||
|bytes|QByteArray||
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
saveBigFilePartAnswer(qint64 msgId, bool  result)
```
```c++
saveBigFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveBigFilePartAnswer(qint64 msgId, bool  result)
```
```c++
onSaveBigFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_BIG_FILE_PART_CALLBACK

## Examples:

```c++
tg->saveBigFilePart(file_id, file_part, file_total_parts, bytes, [=](TG_SAVE_BIG_FILE_PART_CALLBACK){
    ...
}, 30000);
```
