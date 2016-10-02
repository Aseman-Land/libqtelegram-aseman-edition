# Contacts.getContacts

## Function:

TelegramCore::contactsGetContacts

## Schema:

```c++
contacts.getContacts#22c6aa08 hash:string = contacts.Contacts;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback&lt;[ContactsContacts](../../types/contactscontacts.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsContacts](../../types/contactscontacts.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getContactsAnswer(qint64 msgId, const ContactsContacts & result)
```
```c++
getContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetContactsAnswer(qint64 msgId, const ContactsContacts & result)
```
```c++
onGetContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CONTACTS_CALLBACK

## Examples:

```c++
tg->getContacts(hash, [=](TG_GET_CONTACTS_CALLBACK){
    ...
}, 30000);
```
