# Photos.deletePhotos

## Function:

TelegramCore::photosDeletePhotos

## Schema:

```c++
photos.deletePhotos#87cf7f2f id:Vector<InputPhoto> = Vector<long>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;[InputPhoto](../../types/inputphoto.md)&gt;||
|callBack|Callback&lt;QList&lt;qint64&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;qint64&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
deletePhotosAnswer(qint64 msgId, const QList&lt;qint64&gt; & result)
```
```c++
deletePhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeletePhotosAnswer(qint64 msgId, const QList&lt;qint64&gt; & result)
```
```c++
onDeletePhotosError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_PHOTOS_CALLBACK

## Examples:

```c++
tg->deletePhotos(id, [=](TG_DELETE_PHOTOS_CALLBACK){
    ...
}, 30000);
```
