# Messages.getInlineBotResults

## Function:

TelegramCore::messagesGetInlineBotResults

## Schema:

```c++
messages.getInlineBotResults#9324600d bot:InputUser query:string offset:string = messages.BotResults;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|bot|[InputUser](../../types/inputuser.md)||
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
tg->getInlineBotResults(bot, query, offset, [=](TG_GET_INLINE_BOT_RESULTS_CALLBACK){
    ...
}, 30000);
```
