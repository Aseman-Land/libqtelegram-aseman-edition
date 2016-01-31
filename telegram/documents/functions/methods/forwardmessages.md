# Messages.forwardMessages

## Function:

TelegramCore::messagesForwardMessages

## Schema:

```c++
messages.forwardMessages#708e0195 flags:# broadcast:flags.4?true from_peer:InputPeer id:Vector<int> random_id:Vector<long> to_peer:InputPeer = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|broadcast|bool||
|fromPeer|[InputPeer](../../types/inputpeer.md)||
|id|QList&lt;qint32&gt;||
|randomId|QList&lt;qint64&gt;||
|toPeer|[InputPeer](../../types/inputpeer.md)||
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
forwardMessagesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
forwardMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onForwardMessagesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onForwardMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_FORWARD_MESSAGES_CALLBACK

## Examples:

```c++
tg->forwardMessages(broadcast, from_peer, id, random_id, to_peer, [=](TG_FORWARD_MESSAGES_CALLBACK){
    ...
}, 30000);
```
