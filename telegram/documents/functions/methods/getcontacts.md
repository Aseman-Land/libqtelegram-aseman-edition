# Contacts.getContacts

## Function:

TelegramCore::contactsGetContacts

## Schema:

`contacts.getContacts#22c6aa08 hash:string = contacts.Contacts;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback<ContactsContacts\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ContactsContacts](../../types/contactscontacts.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getContactsAnswer(qint64 msgId, const ContactsContacts & result)`
* `getContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetContactsAnswer(qint64 msgId, const ContactsContacts & result)`
* `onGetContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_CONTACTS_CALLBACK

## Examples:

`tg->getContacts(hash, [=](TG_GET_CONTACTS_CALLBACK){
    ...
}, 30000);`
