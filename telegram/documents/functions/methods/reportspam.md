# Messages.reportSpam

## Function:

TelegramCore::messagesReportSpam

## Schema:

`messages.reportSpam#cf1592db peer:InputPeer = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `reportSpamAnswer(qint64 msgId, bool  result)`
* `reportSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReportSpamAnswer(qint64 msgId, bool  result)`
* `onReportSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_REPORT_SPAM_CALLBACK

## Examples:

`tg->reportSpam(peer, [=](TG_REPORT_SPAM_CALLBACK){
    ...
}, 30000);`
