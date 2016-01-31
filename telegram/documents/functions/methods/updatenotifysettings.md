# Account.updateNotifySettings

## Function:

TelegramCore::accountUpdateNotifySettings

## Schema:

`account.updateNotifySettings#84be5b93 peer:InputNotifyPeer settings:InputPeerNotifySettings = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputNotifyPeer](../../types/inputnotifypeer.md)||
|settings|[InputPeerNotifySettings](../../types/inputpeernotifysettings.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updateNotifySettingsAnswer(qint64 msgId, bool  result)`
* `updateNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdateNotifySettingsAnswer(qint64 msgId, bool  result)`
* `onUpdateNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_NOTIFY_SETTINGS_CALLBACK

## Examples:

`tg->updateNotifySettings(peer, settings, [=](TG_UPDATE_NOTIFY_SETTINGS_CALLBACK){
    ...
}, 30000);`
