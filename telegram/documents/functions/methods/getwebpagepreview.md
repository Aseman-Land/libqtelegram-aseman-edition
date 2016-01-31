# Messages.getWebPagePreview

## Function:

TelegramCore::messagesGetWebPagePreview

## Schema:

```c++
messages.getWebPagePreview#25223e24 message:string = MessageMedia;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|message|QString||
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
getWebPagePreviewAnswer(qint64 msgId, const MessageMedia & result)
```
```c++
getWebPagePreviewError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetWebPagePreviewAnswer(qint64 msgId, const MessageMedia & result)
```
```c++
onGetWebPagePreviewError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_WEB_PAGE_PREVIEW_CALLBACK

## Examples:

```c++
tg->getWebPagePreview(message, [=](TG_GET_WEB_PAGE_PREVIEW_CALLBACK){
    ...
}, 30000);
```
