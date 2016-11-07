# Messages.getInlineGameHighScores

## Function:

TelegramCore::messagesGetInlineGameHighScores

## Schema:

```c++
messages.getInlineGameHighScores#f635e1b id:InputBotInlineMessageID user_id:InputUser = messages.HighScores;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputBotInlineMessageID](../../types/inputbotinlinemessageid.md)||
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
getInlineGameHighScoresAnswer(qint64 msgId, const MessagesHighScores & result)
```
```c++
getInlineGameHighScoresError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetInlineGameHighScoresAnswer(qint64 msgId, const MessagesHighScores & result)
```
```c++
onGetInlineGameHighScoresError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_INLINE_GAME_HIGH_SCORES_CALLBACK

## Examples:

```c++
tg->getInlineGameHighScores(id, user_id, [=](TG_GET_INLINE_GAME_HIGH_SCORES_CALLBACK){
    ...
}, 30000);
```
