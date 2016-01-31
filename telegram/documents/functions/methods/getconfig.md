# Help.getConfig

## Function:

TelegramCore::helpGetConfig

## Schema:

```c++
help.getConfig#c4f9186b = Config;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[Config](../../types/config.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[Config](../../types/config.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getConfigAnswer(qint64 msgId, const Config & result)
```
```c++
getConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetConfigAnswer(qint64 msgId, const Config & result)
```
```c++
onGetConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CONFIG_CALLBACK

## Examples:

```c++
tg->getConfig([=](TG_GET_CONFIG_CALLBACK){
    ...
}, 30000);
```
