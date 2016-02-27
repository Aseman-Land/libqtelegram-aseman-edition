# Channels.editMessage

## Function:

TelegramCore::channelsEditMessage

## Schema:

```c++
channels.editMessage#dcda80ed flags:# no_webpage:flags.1?true channel:InputChannel id:int message:string entities:flags.3?Vector<MessageEntity> = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|noWebpage|bool||
|channel|[InputChannel](../../types/inputchannel.md)||
|id|qint32||
|message|QString||
|entities|QList&lt;[MessageEntity](../../types/messageentity.md)&gt;||
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
editMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditMessageAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_MESSAGE_CALLBACK

## Examples:

```c++
tg->editMessage(no_webpage, channel, id, message, entities, [=](TG_EDIT_MESSAGE_CALLBACK){
    ...
}, 30000);
```
