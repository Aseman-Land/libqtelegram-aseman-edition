# Account.getPassword

## Function:

TelegramCore::accountGetPassword

## Schema:

```c++
account.getPassword#548a30f5 = account.Password;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[AccountPassword](../../types/accountpassword.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountPassword](../../types/accountpassword.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPasswordAnswer(qint64 msgId, const AccountPassword & result)
```
```c++
getPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPasswordAnswer(qint64 msgId, const AccountPassword & result)
```
```c++
onGetPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PASSWORD_CALLBACK

## Examples:

```c++
tg->getPassword([=](TG_GET_PASSWORD_CALLBACK){
    ...
}, 30000);
```
