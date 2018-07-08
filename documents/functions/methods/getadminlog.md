# Channels.getAdminLog

## Function:

TelegramCore::channelsGetAdminLog

## Schema:

```c++
channels.getAdminLog#33ddf480 flags:# channel:InputChannel q:string events_filter:flags.0?ChannelAdminLogEventsFilter admins:flags.1?Vector<InputUser> max_id:long min_id:long limit:int = channels.AdminLogResults;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|q|QString||
|eventsFilter|[ChannelAdminLogEventsFilter](../../types/channeladminlogeventsfilter.md)||
|admins|QList&lt;[InputUser](../../types/inputuser.md)&gt;||
|maxId|qint64||
|minId|qint64||
|limit|qint32||
|callBack|Callback&lt;[ChannelsAdminLogResults](../../types/channelsadminlogresults.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ChannelsAdminLogResults](../../types/channelsadminlogresults.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAdminLogAnswer(qint64 msgId, const ChannelsAdminLogResults & result)
```
```c++
getAdminLogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAdminLogAnswer(qint64 msgId, const ChannelsAdminLogResults & result)
```
```c++
onGetAdminLogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ADMIN_LOG_CALLBACK

## Examples:

```c++
tg->getAdminLog(channel, q, events_filter, admins, max_id, min_id, limit, [=](TG_GET_ADMIN_LOG_CALLBACK){
    ...
}, 30000);
```
