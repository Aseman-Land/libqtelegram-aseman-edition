# Channels.createChannel

## Function:

TelegramCore::channelsCreateChannel

## Schema:

```c++
channels.createChannel#f4893d7f flags:# broadcast:flags.0?true megagroup:flags.1?true title:string about:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|broadcast|bool||
|megagroup|bool||
|title|QString||
|about|QString||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
createChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
createChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCreateChannelAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onCreateChannelError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CREATE_CHANNEL_CALLBACK

## Examples:

```c++
tg->createChannel(broadcast, megagroup, title, about, [=](TG_CREATE_CHANNEL_CALLBACK){
    ...
}, 30000);
```
