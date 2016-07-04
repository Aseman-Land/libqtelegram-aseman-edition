# Account.deleteAccount

## Function:

TelegramCore::accountDeleteAccount

## Schema:

```c++
account.deleteAccount#418d4e0b reason:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|reason|QString||
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
deleteAccountAnswer(qint64 msgId, bool  result)
```
```c++
deleteAccountError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteAccountAnswer(qint64 msgId, bool  result)
```
```c++
onDeleteAccountError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_ACCOUNT_CALLBACK

## Examples:

```c++
tg->deleteAccount(reason, [=](TG_DELETE_ACCOUNT_CALLBACK){
    ...
}, 30000);
```
