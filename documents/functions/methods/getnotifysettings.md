# Account.getNotifySettings

## Function:

TelegramCore::accountGetNotifySettings

## Schema:

```c++
account.getNotifySettings#12b3ad31 peer:InputNotifyPeer = PeerNotifySettings;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputNotifyPeer](../../types/inputnotifypeer.md)||
|callBack|Callback&lt;[PeerNotifySettings](../../types/peernotifysettings.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PeerNotifySettings](../../types/peernotifysettings.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getNotifySettingsAnswer(qint64 msgId, const PeerNotifySettings & result)
```
```c++
getNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetNotifySettingsAnswer(qint64 msgId, const PeerNotifySettings & result)
```
```c++
onGetNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_NOTIFY_SETTINGS_CALLBACK

## Examples:

```c++
tg->getNotifySettings(peer, [=](TG_GET_NOTIFY_SETTINGS_CALLBACK){
    ...
}, 30000);
```
