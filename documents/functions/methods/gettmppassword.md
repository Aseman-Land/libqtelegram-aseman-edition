# Account.getTmpPassword

## Function:

TelegramCore::accountGetTmpPassword

## Schema:

```c++
account.getTmpPassword#4a82327e password_hash:bytes period:int = account.TmpPassword;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|passwordHash|QByteArray||
|period|qint32||
|callBack|Callback&lt;[AccountTmpPassword](../../types/accounttmppassword.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountTmpPassword](../../types/accounttmppassword.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getTmpPasswordAnswer(qint64 msgId, const AccountTmpPassword & result)
```
```c++
getTmpPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetTmpPasswordAnswer(qint64 msgId, const AccountTmpPassword & result)
```
```c++
onGetTmpPasswordError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_TMP_PASSWORD_CALLBACK

## Examples:

```c++
tg->getTmpPassword(password_hash, period, [=](TG_GET_TMP_PASSWORD_CALLBACK){
    ...
}, 30000);
```
