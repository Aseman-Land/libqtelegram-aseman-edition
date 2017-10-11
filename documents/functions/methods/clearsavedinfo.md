# Payments.clearSavedInfo

## Function:

TelegramCore::paymentsClearSavedInfo

## Schema:

```c++
payments.clearSavedInfo#d83d70c1 flags:# credentials:flags.0?true info:flags.1?true = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|credentials|bool||
|info|bool||
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
clearSavedInfoAnswer(qint64 msgId, bool  result)
```
```c++
clearSavedInfoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onClearSavedInfoAnswer(qint64 msgId, bool  result)
```
```c++
onClearSavedInfoError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CLEAR_SAVED_INFO_CALLBACK

## Examples:

```c++
tg->clearSavedInfo(credentials, info, [=](TG_CLEAR_SAVED_INFO_CALLBACK){
    ...
}, 30000);
```
