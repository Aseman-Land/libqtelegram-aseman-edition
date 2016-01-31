# Contacts.deleteContacts

## Function:

TelegramCore::contactsDeleteContacts

## Schema:

```c++
contacts.deleteContacts#59ab389e id:Vector<InputUser> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;[InputUser](../../types/inputuser.md)&gt;||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
deleteContactsAnswer(qint64 msgId, bool  result)
```
```c++
deleteContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteContactsAnswer(qint64 msgId, bool  result)
```
```c++
onDeleteContactsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_CONTACTS_CALLBACK

## Examples:

```c++
tg->deleteContacts(id, [=](TG_DELETE_CONTACTS_CALLBACK){
    ...
}, 30000);
```
