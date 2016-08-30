# Messages.clearRecentStickers

## Function:

TelegramCore::messagesClearRecentStickers

## Schema:

```c++
messages.clearRecentStickers#ab02e5d2 = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
clearRecentStickersAnswer(qint64 msgId, bool  result)
```
```c++
clearRecentStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onClearRecentStickersAnswer(qint64 msgId, bool  result)
```
```c++
onClearRecentStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CLEAR_RECENT_STICKERS_CALLBACK

## Examples:

```c++
tg->clearRecentStickers([=](TG_CLEAR_RECENT_STICKERS_CALLBACK){
    ...
}, 30000);
```
