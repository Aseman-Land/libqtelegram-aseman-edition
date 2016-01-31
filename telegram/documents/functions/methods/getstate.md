# Updates.getState

## Function:

TelegramCore::updatesGetState

## Schema:

```c++
updates.getState#edd4882a = updates.State;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[UpdatesState](../../types/updatesstate.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesState](../../types/updatesstate.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getStateAnswer(qint64 msgId, const UpdatesState & result)
```
```c++
getStateError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetStateAnswer(qint64 msgId, const UpdatesState & result)
```
```c++
onGetStateError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_STATE_CALLBACK

## Examples:

```c++
tg->getState([=](TG_GET_STATE_CALLBACK){
    ...
}, 30000);
```
