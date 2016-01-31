# Account.getNotifySettings

## Function:

TelegramCore::accountGetNotifySettings

## Schema:

`account.getNotifySettings#12b3ad31 peer:InputNotifyPeer = PeerNotifySettings;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputNotifyPeer](../../types/inputnotifypeer.md)||
|callBack|Callback<PeerNotifySettings\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[PeerNotifySettings](../../types/peernotifysettings.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getNotifySettingsAnswer(qint64 msgId, const PeerNotifySettings & result)`
* `getNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetNotifySettingsAnswer(qint64 msgId, const PeerNotifySettings & result)`
* `onGetNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_NOTIFY_SETTINGS_CALLBACK

## Examples:

`tg->getNotifySettings(peer, [=](TG_GET_NOTIFY_SETTINGS_CALLBACK){
    ...
}, 30000);`
