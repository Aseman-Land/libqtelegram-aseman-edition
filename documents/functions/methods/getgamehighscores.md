# Messages.getGameHighScores

## Function:

TelegramCore::messagesGetGameHighScores

## Schema:

```c++
messages.getGameHighScores#e822649d peer:InputPeer id:int user_id:InputUser = messages.HighScores;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|qint32||
|userId|[InputUser](../../types/inputuser.md)||
|callBack|Callback&lt;[MessagesHighScores](../../types/messageshighscores.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesHighScores](../../types/messageshighscores.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getGameHighScoresAnswer(qint64 msgId, const MessagesHighScores & result)
```
```c++
getGameHighScoresError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetGameHighScoresAnswer(qint64 msgId, const MessagesHighScores & result)
```
```c++
onGetGameHighScoresError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_GAME_HIGH_SCORES_CALLBACK

## Examples:

```c++
tg->getGameHighScores(peer, id, user_id, [=](TG_GET_GAME_HIGH_SCORES_CALLBACK){
    ...
}, 30000);
```
