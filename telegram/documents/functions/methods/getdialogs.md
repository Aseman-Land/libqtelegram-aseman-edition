# Messages.getDialogs

## Function:

TelegramCore::messagesGetDialogs

## Schema:

`messages.getDialogs#6b47f94d offset_date:int offset_id:int offset_peer:InputPeer limit:int = messages.Dialogs;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|offsetDate|qint32||
|offsetId|qint32||
|offsetPeer|[InputPeer](../../types/inputpeer.md)||
|limit|qint32||
|callBack|Callback<MessagesDialogs\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesDialogs](../../types/messagesdialogs.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getDialogsAnswer(qint64 msgId, const MessagesDialogs & result)`
* `getDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetDialogsAnswer(qint64 msgId, const MessagesDialogs & result)`
* `onGetDialogsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_DIALOGS_CALLBACK

## Examples:

`tg->getDialogs(offset_date, offset_id, offset_peer, limit, [=](TG_GET_DIALOGS_CALLBACK){
    ...
}, 30000);`
