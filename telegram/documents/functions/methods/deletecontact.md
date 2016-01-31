# Contacts.deleteContact

## Function:

TelegramCore::contactsDeleteContact

## Schema:

`contacts.deleteContact#8e953744 id:InputUser = contacts.Link;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback<ContactsLink\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ContactsLink](../../types/contactslink.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteContactAnswer(qint64 msgId, const ContactsLink & result)`
* `deleteContactError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteContactAnswer(qint64 msgId, const ContactsLink & result)`
* `onDeleteContactError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_CONTACT_CALLBACK

## Examples:

`tg->deleteContact(id, [=](TG_DELETE_CONTACT_CALLBACK){
    ...
}, 30000);`
