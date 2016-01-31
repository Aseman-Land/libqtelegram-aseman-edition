# Channels.deleteUserHistory

## Function:

TelegramCore::channelsDeleteUserHistory

## Schema:

`channels.deleteUserHistory#d10dd71b channel:InputChannel user_id:InputUser = messages.AffectedHistory;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|callBack|Callback<MessagesAffectedHistory\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesAffectedHistory](../../types/messagesaffectedhistory.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `deleteUserHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)`
* `deleteUserHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onDeleteUserHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)`
* `onDeleteUserHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_DELETE_USER_HISTORY_CALLBACK

## Examples:

`tg->deleteUserHistory(channel, user_id, [=](TG_DELETE_USER_HISTORY_CALLBACK){
    ...
}, 30000);`
