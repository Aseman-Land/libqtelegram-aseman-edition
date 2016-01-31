# Contacts.getBlocked

## Function:

TelegramCore::contactsGetBlocked

## Schema:

`contacts.getBlocked#f57c350f offset:int limit:int = contacts.Blocked;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|offset|qint32||
|limit|qint32||
|callBack|Callback<ContactsBlocked\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ContactsBlocked](../../types/contactsblocked.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getBlockedAnswer(qint64 msgId, const ContactsBlocked & result)`
* `getBlockedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetBlockedAnswer(qint64 msgId, const ContactsBlocked & result)`
* `onGetBlockedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_BLOCKED_CALLBACK

## Examples:

`tg->getBlocked(offset, limit, [=](TG_GET_BLOCKED_CALLBACK){
    ...
}, 30000);`
