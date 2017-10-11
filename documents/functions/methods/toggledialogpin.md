# Messages.toggleDialogPin

## Function:

TelegramCore::messagesToggleDialogPin

## Schema:

```c++
messages.toggleDialogPin#3289be6a flags:# pinned:flags.0?true peer:InputPeer = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|pinned|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
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
toggleDialogPinAnswer(qint64 msgId, bool  result)
```
```c++
toggleDialogPinError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onToggleDialogPinAnswer(qint64 msgId, bool  result)
```
```c++
onToggleDialogPinError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_TOGGLE_DIALOG_PIN_CALLBACK

## Examples:

```c++
tg->toggleDialogPin(pinned, peer, [=](TG_TOGGLE_DIALOG_PIN_CALLBACK){
    ...
}, 30000);
```
