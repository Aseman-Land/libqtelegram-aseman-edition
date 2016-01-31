# Contacts.deleteContacts

## Function:

TelegramCore::contactsDeleteContacts

## Schema:

`contacts.deleteContacts#59ab389e id:Vector<InputUser> = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<InputUser>||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteContactsAnswer(qint64 msgId, bool  result)`
* `deleteContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteContactsAnswer(qint64 msgId, bool  result)`
* `onDeleteContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_CONTACTS_CALLBACK

## Examples:

`tg->deleteContacts(id, [=](TG_DELETE_CONTACTS_CALLBACK){
    ...
}, 30000);`
