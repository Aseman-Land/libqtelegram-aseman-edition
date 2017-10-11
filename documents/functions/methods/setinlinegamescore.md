# Messages.setInlineGameScore

## Function:

TelegramCore::messagesSetInlineGameScore

## Schema:

```c++
messages.setInlineGameScore#15ad9f64 flags:# edit_message:flags.0?true force:flags.1?true id:InputBotInlineMessageID user_id:InputUser score:int = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|editMessage|bool||
|force|bool||
|id|[InputBotInlineMessageID](../../types/inputbotinlinemessageid.md)||
|userId|[InputUser](../../types/inputuser.md)||
|score|qint32||
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
setInlineGameScoreAnswer(qint64 msgId, bool  result)
```
```c++
setInlineGameScoreError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetInlineGameScoreAnswer(qint64 msgId, bool  result)
```
```c++
onSetInlineGameScoreError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_INLINE_GAME_SCORE_CALLBACK

## Examples:

```c++
tg->setInlineGameScore(edit_message, force, id, user_id, score, [=](TG_SET_INLINE_GAME_SCORE_CALLBACK){
    ...
}, 30000);
```
