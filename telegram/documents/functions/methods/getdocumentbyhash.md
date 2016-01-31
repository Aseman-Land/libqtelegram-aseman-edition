# Messages.getDocumentByHash

## Function:

TelegramCore::messagesGetDocumentByHash

## Schema:

`messages.getDocumentByHash#338e2464 sha256:bytes size:int mime_type:string = Document;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|sha256|QByteArray||
|size|qint32||
|mimeType|QString||
|callBack|Callback<Document\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[Document](../../types/document.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getDocumentByHashAnswer(qint64 msgId, const Document & result)`
* `getDocumentByHashError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetDocumentByHashAnswer(qint64 msgId, const Document & result)`
* `onGetDocumentByHashError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_DOCUMENT_BY_HASH_CALLBACK

## Examples:

`tg->getDocumentByHash(sha256, size, mime_type, [=](TG_GET_DOCUMENT_BY_HASH_CALLBACK){
    ...
}, 30000);`
