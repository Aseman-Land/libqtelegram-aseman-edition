# Channels.createChannel

## Function:

TelegramCore::channelsCreateChannel

## Schema:

`channels.createChannel#f4893d7f flags:# broadcast:flags.0?true megagroup:flags.1?true title:string about:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|broadcast|bool||
|megagroup|bool||
|title|QString||
|about|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `createChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `createChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onCreateChannelAnswer(qint64 msgId, const UpdatesType & result)`
* `onCreateChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CREATE_CHANNEL_CALLBACK

## Examples:

`tg->createChannel(broadcast, megagroup, title, about, [=](TG_CREATE_CHANNEL_CALLBACK){
    ...
}, 30000);`
