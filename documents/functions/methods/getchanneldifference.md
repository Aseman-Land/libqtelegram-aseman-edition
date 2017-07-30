# Updates.getChannelDifference

## Function:

TelegramCore::updatesGetChannelDifference

## Schema:

```c++
updates.getChannelDifference#3173d78 flags:# force:flags.0?true channel:InputChannel filter:ChannelMessagesFilter pts:int limit:int = updates.ChannelDifference;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|force|bool||
|channel|[InputChannel](../../types/inputchannel.md)||
|filter|[ChannelMessagesFilter](../../types/channelmessagesfilter.md)||
|pts|qint32||
|limit|qint32||
|callBack|Callback&lt;[UpdatesChannelDifference](../../types/updateschanneldifference.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesChannelDifference](../../types/updateschanneldifference.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getChannelDifferenceAnswer(qint64 msgId, const UpdatesChannelDifference & result)
```
```c++
getChannelDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetChannelDifferenceAnswer(qint64 msgId, const UpdatesChannelDifference & result)
```
```c++
onGetChannelDifferenceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CHANNEL_DIFFERENCE_CALLBACK

## Examples:

```c++
tg->getChannelDifference(force, channel, filter, pts, limit, [=](TG_GET_CHANNEL_DIFFERENCE_CALLBACK){
    ...
}, 30000);
```
