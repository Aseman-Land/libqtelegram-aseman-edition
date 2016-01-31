# Channels.updateUsername

## Function:

TelegramCore::channelsUpdateUsername

## Schema:

`channels.updateUsername#3514b3de channel:InputChannel username:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|username|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updateUsernameAnswer(qint64 msgId, bool  result)`
* `updateUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdateUsernameAnswer(qint64 msgId, bool  result)`
* `onUpdateUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_USERNAME_CALLBACK

## Examples:

`tg->updateUsername(channel, username, [=](TG_UPDATE_USERNAME_CALLBACK){
    ...
}, 30000);`
