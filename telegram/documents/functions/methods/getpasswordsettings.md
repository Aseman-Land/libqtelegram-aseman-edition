# Account.getPasswordSettings

## Function:

TelegramCore::accountGetPasswordSettings

## Schema:

```c++
account.getPasswordSettings#bc8d11bb current_password_hash:bytes = account.PasswordSettings;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|currentPasswordHash|QByteArray||
|callBack|Callback&lt;[AccountPasswordSettings](../../types/accountpasswordsettings.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[AccountPasswordSettings](../../types/accountpasswordsettings.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPasswordSettingsAnswer(qint64 msgId, const AccountPasswordSettings & result)
```
```c++
getPasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPasswordSettingsAnswer(qint64 msgId, const AccountPasswordSettings & result)
```
```c++
onGetPasswordSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PASSWORD_SETTINGS_CALLBACK

## Examples:

```c++
tg->getPasswordSettings(current_password_hash, [=](TG_GET_PASSWORD_SETTINGS_CALLBACK){
    ...
}, 30000);
```
