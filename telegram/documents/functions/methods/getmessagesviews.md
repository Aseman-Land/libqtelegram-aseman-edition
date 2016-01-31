# Messages.getMessagesViews

## Function:

TelegramCore::messagesGetMessagesViews

## Schema:

`messages.getMessagesViews#c4c8a55d peer:InputPeer id:Vector<int> increment:Bool = Vector<int>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|QList<qint32>||
|increment|bool||
|callBack|Callback<QList<qint32>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<qint32>](../../types/qlist<qint32>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getMessagesViewsAnswer(qint64 msgId, const QList<qint32> & result)`
* `getMessagesViewsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetMessagesViewsAnswer(qint64 msgId, const QList<qint32> & result)`
* `onGetMessagesViewsError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_MESSAGES_VIEWS_CALLBACK

## Examples:

`tg->getMessagesViews(peer, id, increment, [=](TG_GET_MESSAGES_VIEWS_CALLBACK){
    ...
}, 30000);`
