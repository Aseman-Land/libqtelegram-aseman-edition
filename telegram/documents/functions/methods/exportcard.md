# Contacts.exportCard

## Function:

TelegramCore::contactsExportCard

## Schema:

`contacts.exportCard#84e53737 = Vector<int>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<QList<qint32>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<qint32>](../../types/qlist<qint32>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `exportCardAnswer(qint64 msgId, const QList<qint32> & result)`
* `exportCardError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onExportCardAnswer(qint64 msgId, const QList<qint32> & result)`
* `onExportCardError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EXPORT_CARD_CALLBACK

## Examples:

`tg->exportCard([=](TG_EXPORT_CARD_CALLBACK){
    ...
}, 30000);`
