# Channels.editTitle

## Function:

TelegramCore::channelsEditTitle

## Schema:

`channels.editTitle#566decd0 channel:InputChannel title:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|title|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `editTitleAnswer(qint64 msgId, const UpdatesType & result)`
* `editTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditTitleAnswer(qint64 msgId, const UpdatesType & result)`
* `onEditTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_TITLE_CALLBACK

## Examples:

`tg->editTitle(channel, title, [=](TG_EDIT_TITLE_CALLBACK){
    ...
}, 30000);`
