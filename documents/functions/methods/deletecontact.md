# Contacts.deleteContact

## Function:

TelegramCore::contactsDeleteContact

## Schema:

```c++
contacts.deleteContact#8e953744 id:InputUser = contacts.Link;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback&lt;[ContactsLink](../../types/contactslink.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsLink](../../types/contactslink.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
deleteContactAnswer(qint64 msgId, const ContactsLink & result)
```
```c++
deleteContactError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteContactAnswer(qint64 msgId, const ContactsLink & result)
```
```c++
onDeleteContactError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_CONTACT_CALLBACK

## Examples:

```c++
tg->deleteContact(id, [=](TG_DELETE_CONTACT_CALLBACK){
    ...
}, 30000);
```
