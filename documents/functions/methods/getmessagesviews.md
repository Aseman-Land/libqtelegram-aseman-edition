# Messages.getMessagesViews

## Function:

TelegramCore::messagesGetMessagesViews

## Schema:

```c++
messages.getMessagesViews#c4c8a55d peer:InputPeer id:Vector<int> increment:Bool = Vector<int>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|QList&lt;qint32&gt;||
|increment|bool||
|callBack|Callback&lt;QList&lt;qint32&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;qint32&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getMessagesViewsAnswer(qint64 msgId, const QList&lt;qint32&gt; & result)
```
```c++
getMessagesViewsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetMessagesViewsAnswer(qint64 msgId, const QList&lt;qint32&gt; & result)
```
```c++
onGetMessagesViewsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_MESSAGES_VIEWS_CALLBACK

## Examples:

```c++
tg->getMessagesViews(peer, id, increment, [=](TG_GET_MESSAGES_VIEWS_CALLBACK){
    ...
}, 30000);
```
