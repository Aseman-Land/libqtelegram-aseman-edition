# Account.getPrivacy

## Function:

TelegramCore::accountGetPrivacy

## Schema:

```c++
account.getPrivacy#dadbc950 key:InputPrivacyKey = account.PrivacyRules;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|key|[InputPrivacyKey](../../types/inputprivacykey.md)||
|callBack|Callback&lt;[AccountPrivacyRules](../../types/accountprivacyrules.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountPrivacyRules](../../types/accountprivacyrules.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)
```
```c++
getPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)
```
```c++
onGetPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PRIVACY_CALLBACK

## Examples:

```c++
tg->getPrivacy(key, [=](TG_GET_PRIVACY_CALLBACK){
    ...
}, 30000);
```
