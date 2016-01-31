# Channels.deleteUserHistory

## Function:

TelegramCore::channelsDeleteUserHistory

## Schema:

```c++
channels.deleteUserHistory#d10dd71b channel:InputChannel user_id:InputUser = messages.AffectedHistory;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|callBack|Callback&lt;[MessagesAffectedHistory](../../types/messagesaffectedhistory.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesAffectedHistory](../../types/messagesaffectedhistory.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
deleteUserHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)
```
```c++
deleteUserHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteUserHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)
```
```c++
onDeleteUserHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_USER_HISTORY_CALLBACK

## Examples:

```c++
tg->deleteUserHistory(channel, user_id, [=](TG_DELETE_USER_HISTORY_CALLBACK){
    ...
}, 30000);
```
