# Channels.exportMessageLink

## Function:

TelegramCore::channelsExportMessageLink

## Schema:

```c++
channels.exportMessageLink#c846d22d channel:InputChannel id:int = ExportedMessageLink;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|id|qint32||
|callBack|Callback&lt;[ExportedMessageLink](../../types/exportedmessagelink.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ExportedMessageLink](../../types/exportedmessagelink.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
exportMessageLinkAnswer(qint64 msgId, const ExportedMessageLink & result)
```
```c++
exportMessageLinkError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onExportMessageLinkAnswer(qint64 msgId, const ExportedMessageLink & result)
```
```c++
onExportMessageLinkError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EXPORT_MESSAGE_LINK_CALLBACK

## Examples:

```c++
tg->exportMessageLink(channel, id, [=](TG_EXPORT_MESSAGE_LINK_CALLBACK){
    ...
}, 30000);
```
