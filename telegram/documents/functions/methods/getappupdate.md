# Help.getAppUpdate

## Function:

TelegramCore::helpGetAppUpdate

## Schema:

```c++
help.getAppUpdate#c812ac7e device_model:string system_version:string app_version:string lang_code:string = help.AppUpdate;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|deviceModel|QString||
|systemVersion|QString||
|appVersion|QString||
|langCode|QString||
|callBack|Callback&lt;[HelpAppUpdate](../../types/helpappupdate.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[HelpAppUpdate](../../types/helpappupdate.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAppUpdateAnswer(qint64 msgId, const HelpAppUpdate & result)
```
```c++
getAppUpdateError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAppUpdateAnswer(qint64 msgId, const HelpAppUpdate & result)
```
```c++
onGetAppUpdateError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_APP_UPDATE_CALLBACK

## Examples:

```c++
tg->getAppUpdate(device_model, system_version, app_version, lang_code, [=](TG_GET_APP_UPDATE_CALLBACK){
    ...
}, 30000);
```
