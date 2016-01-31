# Messages.getDhConfig

## Function:

TelegramCore::messagesGetDhConfig

## Schema:

```c++
messages.getDhConfig#26cf8950 version:int random_length:int = messages.DhConfig;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|version|qint32||
|randomLength|qint32||
|callBack|Callback&lt;[MessagesDhConfig](../../types/messagesdhconfig.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesDhConfig](../../types/messagesdhconfig.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getDhConfigAnswer(qint64 msgId, const MessagesDhConfig & result)
```
```c++
getDhConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetDhConfigAnswer(qint64 msgId, const MessagesDhConfig & result)
```
```c++
onGetDhConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_DH_CONFIG_CALLBACK

## Examples:

```c++
tg->getDhConfig(version, random_length, [=](TG_GET_DH_CONFIG_CALLBACK){
    ...
}, 30000);
```
