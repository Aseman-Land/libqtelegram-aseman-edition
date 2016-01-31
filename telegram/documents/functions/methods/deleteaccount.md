# Account.deleteAccount

## Function:

TelegramCore::accountDeleteAccount

## Schema:

`account.deleteAccount#418d4e0b reason:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|reason|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteAccountAnswer(qint64 msgId, bool  result)`
* `deleteAccountError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteAccountAnswer(qint64 msgId, bool  result)`
* `onDeleteAccountError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_ACCOUNT_CALLBACK

## Examples:

`tg->deleteAccount(reason, [=](TG_DELETE_ACCOUNT_CALLBACK){
    ...
}, 30000);`
