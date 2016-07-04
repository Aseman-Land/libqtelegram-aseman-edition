# Channels.checkUsername

## Function:

TelegramCore::channelsCheckUsername

## Schema:

```c++
channels.checkUsername#10e6bd2c channel:InputChannel username:string = Bool;
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
checkUsernameAnswer(qint64 msgId, bool  result)
```
```c++
checkUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCheckUsernameAnswer(qint64 msgId, bool  result)
```
```c++
onCheckUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CHECK_USERNAME_CALLBACK

## Examples:

```c++
tg->checkUsername(channel, username, [=](TG_CHECK_USERNAME_CALLBACK){
    ...
}, 30000);
```
