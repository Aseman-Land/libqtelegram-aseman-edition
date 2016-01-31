# Account.getPrivacy

## Function:

TelegramCore::accountGetPrivacy

## Schema:

`account.getPrivacy#dadbc950 key:InputPrivacyKey = account.PrivacyRules;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|key|[InputPrivacyKey](../../types/inputprivacykey.md)||
|callBack|Callback<AccountPrivacyRules\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountPrivacyRules](../../types/accountprivacyrules.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)`
* `getPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)`
* `onGetPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_PRIVACY_CALLBACK

## Examples:

`tg->getPrivacy(key, [=](TG_GET_PRIVACY_CALLBACK){
    ...
}, 30000);`
