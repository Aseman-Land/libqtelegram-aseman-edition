# Contacts.resolveUsername

## Function:

TelegramCore::contactsResolveUsername

## Schema:

`contacts.resolveUsername#f93ccba3 username:string = contacts.ResolvedPeer;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|username|QString||
|callBack|Callback<ContactsResolvedPeer\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ContactsResolvedPeer](../../types/contactsresolvedpeer.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `resolveUsernameAnswer(qint64 msgId, const ContactsResolvedPeer & result)`
* `resolveUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onResolveUsernameAnswer(qint64 msgId, const ContactsResolvedPeer & result)`
* `onResolveUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RESOLVE_USERNAME_CALLBACK

## Examples:

`tg->resolveUsername(username, [=](TG_RESOLVE_USERNAME_CALLBACK){
    ...
}, 30000);`
