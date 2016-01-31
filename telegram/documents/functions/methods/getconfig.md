# Help.getConfig

## Function:

TelegramCore::helpGetConfig

## Schema:

`help.getConfig#c4f9186b = Config;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<Config\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[Config](../../types/config.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getConfigAnswer(qint64 msgId, const Config & result)`
* `getConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetConfigAnswer(qint64 msgId, const Config & result)`
* `onGetConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_CONFIG_CALLBACK

## Examples:

`tg->getConfig([=](TG_GET_CONFIG_CALLBACK){
    ...
}, 30000);`
