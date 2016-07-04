# Contacts.resetTopPeerRating

## Function:

TelegramCore::contactsResetTopPeerRating

## Schema:

```c++
contacts.resetTopPeerRating#1ae373ac category:TopPeerCategory peer:InputPeer = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|category|[TopPeerCategory](../../types/toppeercategory.md)||
|peer|[InputPeer](../../types/inputpeer.md)||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
resetTopPeerRatingAnswer(qint64 msgId, bool  result)
```
```c++
resetTopPeerRatingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResetTopPeerRatingAnswer(qint64 msgId, bool  result)
```
```c++
onResetTopPeerRatingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESET_TOP_PEER_RATING_CALLBACK

## Examples:

```c++
tg->resetTopPeerRating(category, peer, [=](TG_RESET_TOP_PEER_RATING_CALLBACK){
    ...
}, 30000);
```
