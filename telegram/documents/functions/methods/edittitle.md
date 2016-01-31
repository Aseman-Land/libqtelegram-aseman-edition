# Channels.editTitle

## Function:

TelegramCore::channelsEditTitle

## Schema:

```c++
channels.editTitle#566decd0 channel:InputChannel title:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|title|QString||
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
editTitleAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditTitleAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_TITLE_CALLBACK

## Examples:

```c++
tg->editTitle(channel, title, [=](TG_EDIT_TITLE_CALLBACK){
    ...
}, 30000);
```
