# Messages.reportSpam

## Function:

TelegramCore::messagesReportSpam

## Schema:

```c++
messages.reportSpam#cf1592db peer:InputPeer = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
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
reportSpamAnswer(qint64 msgId, bool  result)
```
```c++
reportSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReportSpamAnswer(qint64 msgId, bool  result)
```
```c++
onReportSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REPORT_SPAM_CALLBACK

## Examples:

```c++
tg->reportSpam(peer, [=](TG_REPORT_SPAM_CALLBACK){
    ...
}, 30000);
```
