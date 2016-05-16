# Messages.getPeerDialogs

## Function:

TelegramCore::messagesGetPeerDialogs

## Schema:

```c++
messages.getPeerDialogs#19250887 peer:Vector<InputPeer> = messages.PeerDialogs;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|QList&lt;[InputPeer](../../types/inputpeer.md)&gt;||
|callBack|Callback&lt;[MessagesPeerDialogs](../../types/messagespeerdialogs.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesPeerDialogs](../../types/messagespeerdialogs.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getPeerDialogsAnswer(qint64 msgId, const MessagesPeerDialogs & result)
```
```c++
getPeerDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPeerDialogsAnswer(qint64 msgId, const MessagesPeerDialogs & result)
```
```c++
onGetPeerDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PEER_DIALOGS_CALLBACK

## Examples:

```c++
tg->getPeerDialogs(peer, [=](TG_GET_PEER_DIALOGS_CALLBACK){
    ...
}, 30000);
```
