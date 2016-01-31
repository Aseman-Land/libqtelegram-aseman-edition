# Messages.getInlineBotResults

## Function:

TelegramCore::messagesGetInlineBotResults

## Schema:

`messages.getInlineBotResults#9324600d bot:InputUser query:string offset:string = messages.BotResults;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|bot|[InputUser](../../types/inputuser.md)||
|query|QString||
|offset|QString||
|callBack|Callback<MessagesBotResults\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesBotResults](../../types/messagesbotresults.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getInlineBotResultsAnswer(qint64 msgId, const MessagesBotResults & result)`
* `getInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetInlineBotResultsAnswer(qint64 msgId, const MessagesBotResults & result)`
* `onGetInlineBotResultsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_INLINE_BOT_RESULTS_CALLBACK

## Examples:

`tg->getInlineBotResults(bot, query, offset, [=](TG_GET_INLINE_BOT_RESULTS_CALLBACK){
    ...
}, 30000);`
