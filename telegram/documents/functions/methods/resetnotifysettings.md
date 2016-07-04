# Account.resetNotifySettings

## Function:

TelegramCore::accountResetNotifySettings

## Schema:

```c++
account.resetNotifySettings#db7e1747 = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
resetNotifySettingsAnswer(qint64 msgId, bool  result)
```
```c++
resetNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResetNotifySettingsAnswer(qint64 msgId, bool  result)
```
```c++
onResetNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESET_NOTIFY_SETTINGS_CALLBACK

## Examples:

```c++
tg->resetNotifySettings([=](TG_RESET_NOTIFY_SETTINGS_CALLBACK){
    ...
}, 30000);
```
