# Account.resetNotifySettings

## Function:

TelegramCore::accountResetNotifySettings

## Schema:

`account.resetNotifySettings#db7e1747 = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `resetNotifySettingsAnswer(qint64 msgId, bool  result)`
* `resetNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onResetNotifySettingsAnswer(qint64 msgId, bool  result)`
* `onResetNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_RESET_NOTIFY_SETTINGS_CALLBACK

## Examples:

`tg->resetNotifySettings([=](TG_RESET_NOTIFY_SETTINGS_CALLBACK){
    ...
}, 30000);`
