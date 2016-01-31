# Account.updatePasswordSettings

## Function:

TelegramCore::accountUpdatePasswordSettings

## Schema:

```c++
account.updatePasswordSettings#fa7c4b86 current_password_hash:bytes new_settings:account.PasswordInputSettings = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|currentPasswordHash|QByteArray||
|newSettings|[AccountPasswordInputSettings](../../types/accountpasswordinputsettings.md)||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
updatePasswordSettingsAnswer(qint64 msgId, bool  result)
```
```c++
updatePasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdatePasswordSettingsAnswer(qint64 msgId, bool  result)
```
```c++
onUpdatePasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_PASSWORD_SETTINGS_CALLBACK

## Examples:

```c++
tg->updatePasswordSettings(current_password_hash, new_settings, [=](TG_UPDATE_PASSWORD_SETTINGS_CALLBACK){
    ...
}, 30000);
```
