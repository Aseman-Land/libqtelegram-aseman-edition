# Channels.toggleComments

## Function:

TelegramCore::channelsToggleComments

## Schema:

`channels.toggleComments#aaa29e88 channel:InputChannel enabled:Bool = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|enabled|bool||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `toggleCommentsAnswer(qint64 msgId, const UpdatesType & result)`
* `toggleCommentsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onToggleCommentsAnswer(qint64 msgId, const UpdatesType & result)`
* `onToggleCommentsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_TOGGLE_COMMENTS_CALLBACK

## Examples:

`tg->toggleComments(channel, enabled, [=](TG_TOGGLE_COMMENTS_CALLBACK){
    ...
}, 30000);`
