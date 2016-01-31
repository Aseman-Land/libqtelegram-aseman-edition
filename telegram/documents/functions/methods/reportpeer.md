# Account.reportPeer

## Function:

TelegramCore::accountReportPeer

## Schema:

```c++
account.reportPeer#ae189d5f peer:InputPeer reason:ReportReason = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|reason|[ReportReason](../../types/reportreason.md)||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
reportPeerAnswer(qint64 msgId, bool  result)
```
```c++
reportPeerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReportPeerAnswer(qint64 msgId, bool  result)
```
```c++
onReportPeerError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REPORT_PEER_CALLBACK

## Examples:

```c++
tg->reportPeer(peer, reason, [=](TG_REPORT_PEER_CALLBACK){
    ...
}, 30000);
```
