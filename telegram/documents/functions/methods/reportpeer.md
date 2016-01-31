# Account.reportPeer

## Function:

TelegramCore::accountReportPeer

## Schema:

`account.reportPeer#ae189d5f peer:InputPeer reason:ReportReason = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|reason|[ReportReason](../../types/reportreason.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `reportPeerAnswer(qint64 msgId, bool  result)`
* `reportPeerError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onReportPeerAnswer(qint64 msgId, bool  result)`
* `onReportPeerError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_REPORT_PEER_CALLBACK

## Examples:

`tg->reportPeer(peer, reason, [=](TG_REPORT_PEER_CALLBACK){
    ...
}, 30000);`
