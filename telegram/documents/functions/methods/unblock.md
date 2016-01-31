# Contacts.unblock

## Function:

TelegramCore::contactsUnblock

## Schema:

```c++
contacts.unblock#e54100bd id:InputUser = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
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
unblockAnswer(qint64 msgId, bool  result)
```
```c++
unblockError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUnblockAnswer(qint64 msgId, bool  result)
```
```c++
onUnblockError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UNBLOCK_CALLBACK

## Examples:

```c++
tg->unblock(id, [=](TG_UNBLOCK_CALLBACK){
    ...
}, 30000);
```
