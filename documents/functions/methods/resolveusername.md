# Contacts.resolveUsername

## Function:

TelegramCore::contactsResolveUsername

## Schema:

```c++
contacts.resolveUsername#f93ccba3 username:string = contacts.ResolvedPeer;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|username|QString||
|callBack|Callback&lt;[ContactsResolvedPeer](../../types/contactsresolvedpeer.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsResolvedPeer](../../types/contactsresolvedpeer.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
resolveUsernameAnswer(qint64 msgId, const ContactsResolvedPeer & result)
```
```c++
resolveUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResolveUsernameAnswer(qint64 msgId, const ContactsResolvedPeer & result)
```
```c++
onResolveUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESOLVE_USERNAME_CALLBACK

## Examples:

```c++
tg->resolveUsername(username, [=](TG_RESOLVE_USERNAME_CALLBACK){
    ...
}, 30000);
```
