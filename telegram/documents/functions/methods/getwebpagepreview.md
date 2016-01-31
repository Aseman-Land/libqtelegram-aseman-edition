# Messages.getWebPagePreview

## Function:

TelegramCore::messagesGetWebPagePreview

## Schema:

`messages.getWebPagePreview#25223e24 message:string = MessageMedia;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|message|QString||
|callBack|Callback<MessageMedia\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessageMedia](../../types/messagemedia.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getWebPagePreviewAnswer(qint64 msgId, const MessageMedia & result)`
* `getWebPagePreviewError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetWebPagePreviewAnswer(qint64 msgId, const MessageMedia & result)`
* `onGetWebPagePreviewError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_WEB_PAGE_PREVIEW_CALLBACK

## Examples:

`tg->getWebPagePreview(message, [=](TG_GET_WEB_PAGE_PREVIEW_CALLBACK){
    ...
}, 30000);`
