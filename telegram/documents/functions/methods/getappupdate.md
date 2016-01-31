# Help.getAppUpdate

## Function:

TelegramCore::helpGetAppUpdate

## Schema:

`help.getAppUpdate#c812ac7e device_model:string system_version:string app_version:string lang_code:string = help.AppUpdate;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|deviceModel|QString||
|systemVersion|QString||
|appVersion|QString||
|langCode|QString||
|callBack|Callback<HelpAppUpdate\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[HelpAppUpdate](../../types/helpappupdate.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getAppUpdateAnswer(qint64 msgId, const HelpAppUpdate & result)`
* `getAppUpdateError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetAppUpdateAnswer(qint64 msgId, const HelpAppUpdate & result)`
* `onGetAppUpdateError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_APP_UPDATE_CALLBACK

## Examples:

`tg->getAppUpdate(device_model, system_version, app_version, lang_code, [=](TG_GET_APP_UPDATE_CALLBACK){
    ...
}, 30000);`
