# Channels.editAbout

## Function:

TelegramCore::channelsEditAbout

## Schema:

```c++
channels.editAbout#13e27f1e channel:InputChannel about:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|about|QString||
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
editAboutAnswer(qint64 msgId, bool  result)
```
```c++
editAboutError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditAboutAnswer(qint64 msgId, bool  result)
```
```c++
onEditAboutError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_ABOUT_CALLBACK

## Examples:

```c++
tg->editAbout(channel, about, [=](TG_EDIT_ABOUT_CALLBACK){
    ...
}, 30000);
```
