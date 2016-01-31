# Account.getPasswordSettings

## Function:

TelegramCore::accountGetPasswordSettings

## Schema:

`account.getPasswordSettings#bc8d11bb current_password_hash:bytes = account.PasswordSettings;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|currentPasswordHash|QByteArray||
|callBack|Callback<AccountPasswordSettings\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[AccountPasswordSettings](../../types/accountpasswordsettings.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getPasswordSettingsAnswer(qint64 msgId, const AccountPasswordSettings & result)`
* `getPasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetPasswordSettingsAnswer(qint64 msgId, const AccountPasswordSettings & result)`
* `onGetPasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_PASSWORD_SETTINGS_CALLBACK

## Examples:

`tg->getPasswordSettings(current_password_hash, [=](TG_GET_PASSWORD_SETTINGS_CALLBACK){
    ...
}, 30000);`
