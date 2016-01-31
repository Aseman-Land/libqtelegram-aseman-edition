# Contacts.importContacts

## Function:

TelegramCore::contactsImportContacts

## Schema:

```c++
contacts.importContacts#da30b32d contacts:Vector<InputContact> replace:Bool = contacts.ImportedContacts;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|contacts|QList&lt;[InputContact](../../types/inputcontact.md)&gt;||
|replace|bool||
|callBack|Callback&lt;[ContactsImportedContacts](../../types/contactsimportedcontacts.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsImportedContacts](../../types/contactsimportedcontacts.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
importContactsAnswer(qint64 msgId, const ContactsImportedContacts & result)
```
```c++
importContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onImportContactsAnswer(qint64 msgId, const ContactsImportedContacts & result)
```
```c++
onImportContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_IMPORT_CONTACTS_CALLBACK

## Examples:

```c++
tg->importContacts(contacts, replace, [=](TG_IMPORT_CONTACTS_CALLBACK){
    ...
}, 30000);
```
