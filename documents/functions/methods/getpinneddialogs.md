# Messages.getPinnedDialogs

## Function:

TelegramCore::messagesGetPinnedDialogs

## Schema:

```c++
messages.getPinnedDialogs#e254d64e = messages.PeerDialogs;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
getPinnedDialogsAnswer(qint64 msgId, const MessagesPeerDialogs & result)
```
```c++
getPinnedDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetPinnedDialogsAnswer(qint64 msgId, const MessagesPeerDialogs & result)
```
```c++
onGetPinnedDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_PINNED_DIALOGS_CALLBACK

## Examples:

```c++
tg->getPinnedDialogs([=](TG_GET_PINNED_DIALOGS_CALLBACK){
    ...
}, 30000);
```
