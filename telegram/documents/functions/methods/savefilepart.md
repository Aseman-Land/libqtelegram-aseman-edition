# Upload.saveFilePart

## Function:

TelegramCore::uploadSaveFilePart

## Schema:

```c++
upload.saveFilePart#b304a621 file_id:long file_part:int bytes:bytes = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|fileId|qint64||
|filePart|qint32||
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
saveFilePartAnswer(qint64 msgId, bool  result)
```
```c++
saveFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSaveFilePartAnswer(qint64 msgId, bool  result)
```
```c++
onSaveFilePartError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SAVE_FILE_PART_CALLBACK

## Examples:

```c++
tg->saveFilePart(file_id, file_part, bytes, [=](TG_SAVE_FILE_PART_CALLBACK){
    ...
}, 30000);
```
