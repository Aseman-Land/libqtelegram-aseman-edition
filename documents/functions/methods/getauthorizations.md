# Account.getAuthorizations

## Function:

TelegramCore::accountGetAuthorizations

## Schema:

```c++
account.getAuthorizations#e320c158 = account.Authorizations;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[AccountAuthorizations](../../types/accountauthorizations.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountAuthorizations](../../types/accountauthorizations.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAuthorizationsAnswer(qint64 msgId, const AccountAuthorizations & result)
```
```c++
getAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAuthorizationsAnswer(qint64 msgId, const AccountAuthorizations & result)
```
```c++
onGetAuthorizationsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_AUTHORIZATIONS_CALLBACK

## Examples:

```c++
tg->getAuthorizations([=](TG_GET_AUTHORIZATIONS_CALLBACK){
    ...
}, 30000);
```
