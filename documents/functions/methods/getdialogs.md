# Messages.getDialogs

## Function:

TelegramCore::messagesGetDialogs

## Schema:

```c++
messages.getDialogs#191ba9c5 flags:# exclude_pinned:flags.0?true offset_date:int offset_id:int offset_peer:InputPeer limit:int = messages.Dialogs;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|excludePinned|bool||
|offsetDate|qint32||
|offsetId|qint32||
|offsetPeer|[InputPeer](../../types/inputpeer.md)||
|limit|qint32||
|callBack|Callback&lt;[MessagesDialogs](../../types/messagesdialogs.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesDialogs](../../types/messagesdialogs.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getDialogsAnswer(qint64 msgId, const MessagesDialogs & result)
```
```c++
getDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetDialogsAnswer(qint64 msgId, const MessagesDialogs & result)
```
```c++
onGetDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_DIALOGS_CALLBACK

## Examples:

```c++
tg->getDialogs(exclude_pinned, offset_date, offset_id, offset_peer, limit, [=](TG_GET_DIALOGS_CALLBACK){
    ...
}, 30000);
```
