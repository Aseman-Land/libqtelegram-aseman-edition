# Messages.getDhConfig

## Function:

TelegramCore::messagesGetDhConfig

## Schema:

`messages.getDhConfig#26cf8950 version:int random_length:int = messages.DhConfig;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|version|qint32||
|randomLength|qint32||
|callBack|Callback<MessagesDhConfig\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[MessagesDhConfig](../../types/messagesdhconfig.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getDhConfigAnswer(qint64 msgId, const MessagesDhConfig & result)`
* `getDhConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetDhConfigAnswer(qint64 msgId, const MessagesDhConfig & result)`
* `onGetDhConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_DH_CONFIG_CALLBACK

## Examples:

`tg->getDhConfig(version, random_length, [=](TG_GET_DH_CONFIG_CALLBACK){
    ...
}, 30000);`
