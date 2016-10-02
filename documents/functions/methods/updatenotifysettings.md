# Account.updateNotifySettings

## Function:

TelegramCore::accountUpdateNotifySettings

## Schema:

```c++
account.updateNotifySettings#84be5b93 peer:InputNotifyPeer settings:InputPeerNotifySettings = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputNotifyPeer](../../types/inputnotifypeer.md)||
|settings|[InputPeerNotifySettings](../../types/inputpeernotifysettings.md)||
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
updateNotifySettingsAnswer(qint64 msgId, bool  result)
```
```c++
updateNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateNotifySettingsAnswer(qint64 msgId, bool  result)
```
```c++
onUpdateNotifySettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_NOTIFY_SETTINGS_CALLBACK

## Examples:

```c++
tg->updateNotifySettings(peer, settings, [=](TG_UPDATE_NOTIFY_SETTINGS_CALLBACK){
    ...
}, 30000);
```
