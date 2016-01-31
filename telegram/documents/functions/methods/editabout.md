# Channels.editAbout

## Function:

TelegramCore::channelsEditAbout

## Schema:

`channels.editAbout#13e27f1e channel:InputChannel about:string = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|about|QString||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `editAboutAnswer(qint64 msgId, bool  result)`
* `editAboutError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onEditAboutAnswer(qint64 msgId, bool  result)`
* `onEditAboutError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_EDIT_ABOUT_CALLBACK

## Examples:

`tg->editAbout(channel, about, [=](TG_EDIT_ABOUT_CALLBACK){
    ...
}, 30000);`
