# Help.getTermsOfService

## Function:

TelegramCore::helpGetTermsOfService

## Schema:

```c++
help.getTermsOfService#37d78f83 lang_code:string = help.TermsOfService;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|langCode|QString||
|callBack|Callback&lt;[HelpTermsOfService](../../types/helptermsofservice.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[HelpTermsOfService](../../types/helptermsofservice.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getTermsOfServiceAnswer(qint64 msgId, const HelpTermsOfService & result)
```
```c++
getTermsOfServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetTermsOfServiceAnswer(qint64 msgId, const HelpTermsOfService & result)
```
```c++
onGetTermsOfServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_TERMS_OF_SERVICE_CALLBACK

## Examples:

```c++
tg->getTermsOfService(lang_code, [=](TG_GET_TERMS_OF_SERVICE_CALLBACK){
    ...
}, 30000);
```
