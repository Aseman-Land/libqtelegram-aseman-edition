# Messages.getInlineBotResults

## Function:

TelegramCore::messagesGetInlineBotResults

## Schema:

```c++
messages.getInlineBotResults#514e999d flags:# bot:InputUser peer:InputPeer geo_point:flags.0?InputGeoPoint query:string offset:string = messages.BotResults;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|bot|[InputUser](../../types/inputuser.md)||
|peer|[InputPeer](../../types/inputpeer.md)||
|geoPoint|[InputGeoPoint](../../types/inputgeopoint.md)||
|query|QString||
|offset|QString||
|callBack|Callback&lt;[MessagesBotResults](../../types/messagesbotresults.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesBotResults](../../types/messagesbotresults.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getInlineBotResultsAnswer(qint64 msgId, const MessagesBotResults & result)
```
```c++
getInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetInlineBotResultsAnswer(qint64 msgId, const MessagesBotResults & result)
```
```c++
onGetInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_INLINE_BOT_RESULTS_CALLBACK

## Examples:

```c++
tg->getInlineBotResults(bot, peer, geo_point, query, offset, [=](TG_GET_INLINE_BOT_RESULTS_CALLBACK){
    ...
}, 30000);
```
