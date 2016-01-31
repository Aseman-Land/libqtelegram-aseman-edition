# Contacts.unblock

## Function:

TelegramCore::contactsUnblock

## Schema:

`contacts.unblock#e54100bd id:InputUser = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `unblockAnswer(qint64 msgId, bool  result)`
* `unblockError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUnblockAnswer(qint64 msgId, bool  result)`
* `onUnblockError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UNBLOCK_CALLBACK

## Examples:

`tg->unblock(id, [=](TG_UNBLOCK_CALLBACK){
    ...
}, 30000);`
