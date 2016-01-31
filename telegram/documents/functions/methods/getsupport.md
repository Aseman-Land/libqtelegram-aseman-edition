# Help.getSupport

## Function:

TelegramCore::helpGetSupport

## Schema:

`help.getSupport#9cdf08cd = help.Support;`
## Parameters:

|callBack|Callback<HelpSupport\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[HelpSupport](../../types/helpsupport.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getSupportAnswer(qint64 msgId, const HelpSupport & result)`
* `getSupportError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetSupportAnswer(qint64 msgId, const HelpSupport & result)`
* `onGetSupportError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_SUPPORT_CALLBACK

## Examples:

`tg->getSupport([=](TG_GET_SUPPORT_CALLBACK){
    ...
}, 30000);`
