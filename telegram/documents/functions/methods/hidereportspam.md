# Messages.hideReportSpam

## Function:

TelegramCore::messagesHideReportSpam

## Schema:

```c++
messages.hideReportSpam#a8f1709b peer:InputPeer = Bool;
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
hideReportSpamAnswer(qint64 msgId, bool  result)
```
```c++
hideReportSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onHideReportSpamAnswer(qint64 msgId, bool  result)
```
```c++
onHideReportSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_HIDE_REPORT_SPAM_CALLBACK

## Examples:

```c++
tg->hideReportSpam(peer, [=](TG_HIDE_REPORT_SPAM_CALLBACK){
    ...
}, 30000);
```
