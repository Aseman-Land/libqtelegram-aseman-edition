# Contacts.importCard

## Function:

TelegramCore::contactsImportCard

## Schema:

`contacts.importCard#4fe196fe export_card:Vector<int> = User;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|exportCard|QList<qint32>||
|callBack|Callback<User\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `importCardAnswer(qint64 msgId, const User & result)`
* `importCardError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onImportCardAnswer(qint64 msgId, const User & result)`
* `onImportCardError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_IMPORT_CARD_CALLBACK

## Examples:

`tg->importCard(export_card, [=](TG_IMPORT_CARD_CALLBACK){
    ...
}, 30000);`
