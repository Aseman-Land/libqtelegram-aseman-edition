# Channels.checkUsername

## Function:

TelegramCore::channelsCheckUsername

## Schema:

`channels.checkUsername#10e6bd2c channel:InputChannel username:string = Bool;`
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

* `checkUsernameAnswer(qint64 msgId, bool  result)`
* `checkUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onCheckUsernameAnswer(qint64 msgId, bool  result)`
* `onCheckUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CHECK_USERNAME_CALLBACK

## Examples:

`tg->checkUsername(channel, username, [=](TG_CHECK_USERNAME_CALLBACK){
    ...
}, 30000);`
