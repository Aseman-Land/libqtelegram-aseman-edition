# Messages.uploadMedia

## Function:

TelegramCore::messagesUploadMedia

## Schema:

```c++
messages.uploadMedia#519bc2b1 peer:InputPeer media:InputMedia = MessageMedia;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|media|[InputMedia](../../types/inputmedia.md)||
|callBack|Callback&lt;[MessageMedia](../../types/messagemedia.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessageMedia](../../types/messagemedia.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
uploadMediaAnswer(qint64 msgId, const MessageMedia & result)
```
```c++
uploadMediaError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUploadMediaAnswer(qint64 msgId, const MessageMedia & result)
```
```c++
onUploadMediaError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPLOAD_MEDIA_CALLBACK

## Examples:

```c++
tg->uploadMedia(peer, media, [=](TG_UPLOAD_MEDIA_CALLBACK){
    ...
}, 30000);
```
