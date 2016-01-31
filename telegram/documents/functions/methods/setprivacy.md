# Account.setPrivacy

## Function:

TelegramCore::accountSetPrivacy

## Schema:

`account.setPrivacy#c9f81ce8 key:InputPrivacyKey rules:Vector<InputPrivacyRule> = account.PrivacyRules;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|key|[InputPrivacyKey](../../types/inputprivacykey.md)||
|rules|QList<InputPrivacyRule>||
|callBack|Callback<AccountPrivacyRules\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountPrivacyRules](../../types/accountprivacyrules.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `setPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)`
* `setPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onSetPrivacyAnswer(qint64 msgId, const AccountPrivacyRules & result)`
* `onSetPrivacyError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_SET_PRIVACY_CALLBACK

## Examples:

`tg->setPrivacy(key, rules, [=](TG_SET_PRIVACY_CALLBACK){
    ...
}, 30000);`
