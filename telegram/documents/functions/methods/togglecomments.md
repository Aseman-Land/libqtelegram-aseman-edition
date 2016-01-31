# Channels.toggleComments

## Function:

TelegramCore::channelsToggleComments

## Schema:

```c++
channels.toggleComments#aaa29e88 channel:InputChannel enabled:Bool = Updates;
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
toggleCommentsAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
toggleCommentsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onToggleCommentsAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onToggleCommentsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_TOGGLE_COMMENTS_CALLBACK

## Examples:

```c++
tg->toggleComments(channel, enabled, [=](TG_TOGGLE_COMMENTS_CALLBACK){
    ...
}, 30000);
```
