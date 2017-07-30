# Messages.getWebPage

## Function:

TelegramCore::messagesGetWebPage

## Schema:

```c++
messages.getWebPage#32ca8f91 url:string hash:int = WebPage;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|url|QString||
|hash|qint32||
|callBack|Callback&lt;[WebPage](../../types/webpage.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[WebPage](../../types/webpage.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getWebPageAnswer(qint64 msgId, const WebPage & result)
```
```c++
getWebPageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetWebPageAnswer(qint64 msgId, const WebPage & result)
```
```c++
onGetWebPageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_WEB_PAGE_CALLBACK

## Examples:

```c++
tg->getWebPage(url, hash, [=](TG_GET_WEB_PAGE_CALLBACK){
    ...
}, 30000);
```
