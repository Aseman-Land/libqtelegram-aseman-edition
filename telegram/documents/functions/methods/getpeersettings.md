# Messages.getPeerSettings

## Function:

TelegramCore::messagesGetPeerSettings

## Schema:

```c++
messages.getPeerSettings#3672e09c peer:InputPeer = PeerSettings;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|callBack|Callback&lt;[PeerSettings](../../types/peersettings.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[PeerSettings](../../types/peersettings.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPeerSettingsAnswer(qint64 msgId, const PeerSettings & result)
```
```c++
getPeerSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPeerSettingsAnswer(qint64 msgId, const PeerSettings & result)
```
```c++
onGetPeerSettingsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PEER_SETTINGS_CALLBACK

## Examples:

```c++
tg->getPeerSettings(peer, [=](TG_GET_PEER_SETTINGS_CALLBACK){
    ...
}, 30000);
```
