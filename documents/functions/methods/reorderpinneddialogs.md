# Messages.reorderPinnedDialogs

## Function:

TelegramCore::messagesReorderPinnedDialogs

## Schema:

```c++
messages.reorderPinnedDialogs#959ff644 flags:# force:flags.0?true order:Vector<InputPeer> = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|force|bool||
|order|QList&lt;[InputPeer](../../types/inputpeer.md)&gt;||
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
reorderPinnedDialogsAnswer(qint64 msgId, bool  result)
```
```c++
reorderPinnedDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReorderPinnedDialogsAnswer(qint64 msgId, bool  result)
```
```c++
onReorderPinnedDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_REORDER_PINNED_DIALOGS_CALLBACK

## Examples:

```c++
tg->reorderPinnedDialogs(force, order, [=](TG_REORDER_PINNED_DIALOGS_CALLBACK){
    ...
}, 30000);
```
