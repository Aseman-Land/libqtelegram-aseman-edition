# Help.getCdnConfig

## Function:

TelegramCore::helpGetCdnConfig

## Schema:

```c++
help.getCdnConfig#52029342 = CdnConfig;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[CdnConfig](../../types/cdnconfig.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[CdnConfig](../../types/cdnconfig.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getCdnConfigAnswer(qint64 msgId, const CdnConfig & result)
```
```c++
getCdnConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetCdnConfigAnswer(qint64 msgId, const CdnConfig & result)
```
```c++
onGetCdnConfigError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_CDN_CONFIG_CALLBACK

## Examples:

```c++
tg->getCdnConfig([=](TG_GET_CDN_CONFIG_CALLBACK){
    ...
}, 30000);
```
