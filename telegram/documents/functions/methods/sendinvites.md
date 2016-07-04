# Auth.sendInvites

## Function:

TelegramCore::authSendInvites

## Schema:

```c++
auth.sendInvites#771c1d97 phone_numbers:Vector<string> message:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumbers|QList&lt;QString&gt;||
|message|QString||
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
sendInvitesAnswer(qint64 msgId, bool  result)
```
```c++
sendInvitesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendInvitesAnswer(qint64 msgId, bool  result)
```
```c++
onSendInvitesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_INVITES_CALLBACK

## Examples:

```c++
tg->sendInvites(phone_numbers, message, [=](TG_SEND_INVITES_CALLBACK){
    ...
}, 30000);
```
