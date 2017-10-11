# Messages.reportEncryptedSpam

## Function:

TelegramCore::messagesReportEncryptedSpam

## Schema:

```c++
messages.reportEncryptedSpam#4b0c8c0f peer:InputEncryptedChat = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputEncryptedChat](../../types/inputencryptedchat.md)||
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
reportEncryptedSpamAnswer(qint64 msgId, bool  result)
```
```c++
reportEncryptedSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReportEncryptedSpamAnswer(qint64 msgId, bool  result)
```
```c++
onReportEncryptedSpamError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REPORT_ENCRYPTED_SPAM_CALLBACK

## Examples:

```c++
tg->reportEncryptedSpam(peer, [=](TG_REPORT_ENCRYPTED_SPAM_CALLBACK){
    ...
}, 30000);
```
