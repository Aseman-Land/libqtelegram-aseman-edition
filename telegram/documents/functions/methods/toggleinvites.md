# Channels.toggleInvites

## Function:

TelegramCore::channelsToggleInvites

## Schema:

```c++
channels.toggleInvites#49609307 channel:InputChannel enabled:Bool = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|enabled|bool||
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
toggleInvitesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
toggleInvitesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onToggleInvitesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onToggleInvitesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_TOGGLE_INVITES_CALLBACK

## Examples:

```c++
tg->toggleInvites(channel, enabled, [=](TG_TOGGLE_INVITES_CALLBACK){
    ...
}, 30000);
```
