# Contacts.getStatuses

## Function:

TelegramCore::contactsGetStatuses

## Schema:

```c++
contacts.getStatuses#c4a353ee = Vector<ContactStatus>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;QList&lt;[ContactStatus](../../types/contactstatus.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[ContactStatus](../../types/contactstatus.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getStatusesAnswer(qint64 msgId, const QList&lt;ContactStatus&gt; & result)
```
```c++
getStatusesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetStatusesAnswer(qint64 msgId, const QList&lt;ContactStatus&gt; & result)
```
```c++
onGetStatusesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_STATUSES_CALLBACK

## Examples:

```c++
tg->getStatuses([=](TG_GET_STATUSES_CALLBACK){
    ...
}, 30000);
```
