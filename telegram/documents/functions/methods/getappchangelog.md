# Help.getAppChangelog

## Function:

TelegramCore::helpGetAppChangelog

## Schema:

`help.getAppChangelog#5bab7fb2 device_model:string system_version:string app_version:string lang_code:string = help.AppChangelog;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|deviceModel|QString||
|systemVersion|QString||
|appVersion|QString||
|langCode|QString||
|callBack|Callback<HelpAppChangelog\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[HelpAppChangelog](../../types/helpappchangelog.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getAppChangelogAnswer(qint64 msgId, const HelpAppChangelog & result)`
* `getAppChangelogError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetAppChangelogAnswer(qint64 msgId, const HelpAppChangelog & result)`
* `onGetAppChangelogError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_APP_CHANGELOG_CALLBACK

## Examples:

`tg->getAppChangelog(device_model, system_version, app_version, lang_code, [=](TG_GET_APP_CHANGELOG_CALLBACK){
    ...
}, 30000);`
