# Channels.updateUsername

## Function:

TelegramCore::channelsUpdateUsername

## Schema:

```c++
channels.updateUsername#3514b3de channel:InputChannel username:string = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|username|QString||
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
updateUsernameAnswer(qint64 msgId, bool  result)
```
```c++
updateUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateUsernameAnswer(qint64 msgId, bool  result)
```
```c++
onUpdateUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_USERNAME_CALLBACK

## Examples:

```c++
tg->updateUsername(channel, username, [=](TG_UPDATE_USERNAME_CALLBACK){
    ...
}, 30000);
```
