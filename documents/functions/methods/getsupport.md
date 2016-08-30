# Help.getSupport

## Function:

TelegramCore::helpGetSupport

## Schema:

```c++
help.getSupport#9cdf08cd = help.Support;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[HelpSupport](../../types/helpsupport.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[HelpSupport](../../types/helpsupport.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getSupportAnswer(qint64 msgId, const HelpSupport & result)
```
```c++
getSupportError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetSupportAnswer(qint64 msgId, const HelpSupport & result)
```
```c++
onGetSupportError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_SUPPORT_CALLBACK

## Examples:

```c++
tg->getSupport([=](TG_GET_SUPPORT_CALLBACK){
    ...
}, 30000);
```
