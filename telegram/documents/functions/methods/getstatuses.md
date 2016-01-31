# Contacts.getStatuses

## Function:

TelegramCore::contactsGetStatuses

## Schema:

`contacts.getStatuses#c4a353ee = Vector<ContactStatus>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<QList<ContactStatus>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<ContactStatus>](../../types/qlist<contactstatus>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getStatusesAnswer(qint64 msgId, const QList<ContactStatus> & result)`
* `getStatusesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetStatusesAnswer(qint64 msgId, const QList<ContactStatus> & result)`
* `onGetStatusesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_STATUSES_CALLBACK

## Examples:

`tg->getStatuses([=](TG_GET_STATUSES_CALLBACK){
    ...
}, 30000);`
