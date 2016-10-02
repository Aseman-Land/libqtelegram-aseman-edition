# Help.getAppUpdate

## Function:

TelegramCore::helpGetAppUpdate

## Schema:

```c++
help.getAppUpdate#ae2de196 = help.AppUpdate;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[HelpAppUpdate](../../types/helpappupdate.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[HelpAppUpdate](../../types/helpappupdate.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAppUpdateAnswer(qint64 msgId, const HelpAppUpdate & result)
```
```c++
getAppUpdateError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAppUpdateAnswer(qint64 msgId, const HelpAppUpdate & result)
```
```c++
onGetAppUpdateError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_APP_UPDATE_CALLBACK

## Examples:

```c++
tg->getAppUpdate([=](TG_GET_APP_UPDATE_CALLBACK){
    ...
}, 30000);
```
