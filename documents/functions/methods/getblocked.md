# Contacts.getBlocked

## Function:

TelegramCore::contactsGetBlocked

## Schema:

```c++
contacts.getBlocked#f57c350f offset:int limit:int = contacts.Blocked;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|offset|qint32||
|limit|qint32||
|callBack|Callback&lt;[ContactsBlocked](../../types/contactsblocked.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsBlocked](../../types/contactsblocked.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getBlockedAnswer(qint64 msgId, const ContactsBlocked & result)
```
```c++
getBlockedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetBlockedAnswer(qint64 msgId, const ContactsBlocked & result)
```
```c++
onGetBlockedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_BLOCKED_CALLBACK

## Examples:

```c++
tg->getBlocked(offset, limit, [=](TG_GET_BLOCKED_CALLBACK){
    ...
}, 30000);
```
