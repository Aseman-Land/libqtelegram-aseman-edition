# Channels.toggleSignatures

## Function:

TelegramCore::channelsToggleSignatures

## Schema:

```c++
channels.toggleSignatures#1f69b606 channel:InputChannel enabled:Bool = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|enabled|bool||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
toggleSignaturesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
toggleSignaturesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onToggleSignaturesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onToggleSignaturesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_TOGGLE_SIGNATURES_CALLBACK

## Examples:

```c++
tg->toggleSignatures(channel, enabled, [=](TG_TOGGLE_SIGNATURES_CALLBACK){
    ...
}, 30000);
```
