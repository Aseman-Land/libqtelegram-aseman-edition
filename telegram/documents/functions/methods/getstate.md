# Updates.getState

## Function:

TelegramCore::updatesGetState

## Schema:

`updates.getState#edd4882a = updates.State;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<UpdatesState\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesState](../../types/updatesstate.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getStateAnswer(qint64 msgId, const UpdatesState & result)`
* `getStateError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetStateAnswer(qint64 msgId, const UpdatesState & result)`
* `onGetStateError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_STATE_CALLBACK

## Examples:

`tg->getState([=](TG_GET_STATE_CALLBACK){
    ...
}, 30000);`
