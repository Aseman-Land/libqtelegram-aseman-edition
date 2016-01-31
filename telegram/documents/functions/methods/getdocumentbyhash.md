# Messages.getDocumentByHash

## Function:

TelegramCore::messagesGetDocumentByHash

## Schema:

```c++
messages.getDocumentByHash#338e2464 sha256:bytes size:int mime_type:string = Document;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|sha256|QByteArray||
|size|qint32||
|mimeType|QString||
|callBack|Callback&lt;[Document](../../types/document.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[Document](../../types/document.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getDocumentByHashAnswer(qint64 msgId, const Document & result)
```
```c++
getDocumentByHashError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetDocumentByHashAnswer(qint64 msgId, const Document & result)
```
```c++
onGetDocumentByHashError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_DOCUMENT_BY_HASH_CALLBACK

## Examples:

```c++
tg->getDocumentByHash(sha256, size, mime_type, [=](TG_GET_DOCUMENT_BY_HASH_CALLBACK){
    ...
}, 30000);
```
