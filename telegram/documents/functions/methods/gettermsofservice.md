# Help.getTermsOfService

## Function:

TelegramCore::helpGetTermsOfService

## Schema:

`help.getTermsOfService#37d78f83 lang_code:string = help.TermsOfService;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|langCode|QString||
|callBack|Callback<HelpTermsOfService\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[HelpTermsOfService](../../types/helptermsofservice.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getTermsOfServiceAnswer(qint64 msgId, const HelpTermsOfService & result)`
* `getTermsOfServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetTermsOfServiceAnswer(qint64 msgId, const HelpTermsOfService & result)`
* `onGetTermsOfServiceError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_TERMS_OF_SERVICE_CALLBACK

## Examples:

`tg->getTermsOfService(lang_code, [=](TG_GET_TERMS_OF_SERVICE_CALLBACK){
    ...
}, 30000);`
