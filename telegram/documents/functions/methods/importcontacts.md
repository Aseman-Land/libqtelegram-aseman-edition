# Contacts.importContacts

## Function:

TelegramCore::contactsImportContacts

## Schema:

`contacts.importContacts#da30b32d contacts:Vector<InputContact> replace:Bool = contacts.ImportedContacts;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|contacts|QList<InputContact>||
|replace|bool||
|callBack|Callback<ContactsImportedContacts\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ContactsImportedContacts](../../types/contactsimportedcontacts.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `importContactsAnswer(qint64 msgId, const ContactsImportedContacts & result)`
* `importContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onImportContactsAnswer(qint64 msgId, const ContactsImportedContacts & result)`
* `onImportContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_IMPORT_CONTACTS_CALLBACK

## Examples:

`tg->importContacts(contacts, replace, [=](TG_IMPORT_CONTACTS_CALLBACK){
    ...
}, 30000);`
