# Messages.getAllDrafts

## Function:

TelegramCore::messagesGetAllDrafts

## Schema:

```c++
messages.getAllDrafts#6a3f8d65 = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
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
getAllDraftsAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
getAllDraftsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAllDraftsAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onGetAllDraftsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ALL_DRAFTS_CALLBACK

## Examples:

```c++
tg->getAllDrafts([=](TG_GET_ALL_DRAFTS_CALLBACK){
    ...
}, 30000);
```
