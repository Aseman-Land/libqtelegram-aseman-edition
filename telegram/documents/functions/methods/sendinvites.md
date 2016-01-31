# Auth.sendInvites

## Function:

TelegramCore::authSendInvites

## Schema:

`auth.sendInvites#771c1d97 phone_numbers:Vector<string> message:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|phoneNumbers|QList<QString>||
|message|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `sendInvitesAnswer(qint64 msgId, bool  result)`
* `sendInvitesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSendInvitesAnswer(qint64 msgId, bool  result)`
* `onSendInvitesError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SEND_INVITES_CALLBACK

## Examples:

`tg->sendInvites(phone_numbers, message, [=](TG_SEND_INVITES_CALLBACK){
    ...
}, 30000);`
