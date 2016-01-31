# Account.updatePasswordSettings

## Function:

TelegramCore::accountUpdatePasswordSettings

## Schema:

`account.updatePasswordSettings#fa7c4b86 current_password_hash:bytes new_settings:account.PasswordInputSettings = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|currentPasswordHash|QByteArray||
|newSettings|[AccountPasswordInputSettings](../../types/accountpasswordinputsettings.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updatePasswordSettingsAnswer(qint64 msgId, bool  result)`
* `updatePasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdatePasswordSettingsAnswer(qint64 msgId, bool  result)`
* `onUpdatePasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_PASSWORD_SETTINGS_CALLBACK

## Examples:

`tg->updatePasswordSettings(current_password_hash, new_settings, [=](TG_UPDATE_PASSWORD_SETTINGS_CALLBACK){
    ...
}, 30000);`
