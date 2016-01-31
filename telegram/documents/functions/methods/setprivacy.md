# Account.setPrivacy

## Function:

TelegramCore::accountSetPrivacy

## Schema:

```c++
account.setPrivacy#c9f81ce8 key:InputPrivacyKey rules:Vector<InputPrivacyRule> = account.PrivacyRules;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|key|[InputPrivacyKey](../../types/inputprivacykey.md)||
|rules|QList&lt;[InputPrivacyRule](../../types/inputprivacyrule.md)&gt;||
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
setPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)
```
```c++
setPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)
```
```c++
onSetPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_PRIVACY_CALLBACK

## Examples:

```c++
tg->setPrivacy(key, rules, [=](TG_SET_PRIVACY_CALLBACK){
    ...
}, 30000);
```
