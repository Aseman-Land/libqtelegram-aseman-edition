# Messages.setGameScore

## Function:

TelegramCore::messagesSetGameScore

## Schema:

```c++
messages.setGameScore#8ef8ecc0 flags:# edit_message:flags.0?true peer:InputPeer id:int user_id:InputUser score:int = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|editMessage|bool||
|peer|[InputPeer](../../types/inputpeer.md)||
|id|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|score|qint32||
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
setGameScoreAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
setGameScoreError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetGameScoreAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onSetGameScoreError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_GAME_SCORE_CALLBACK

## Examples:

```c++
tg->setGameScore(edit_message, peer, id, user_id, score, [=](TG_SET_GAME_SCORE_CALLBACK){
    ...
}, 30000);
```
