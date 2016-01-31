# Contacts.getSuggested

## Function:

TelegramCore::contactsGetSuggested

## Schema:

`contacts.getSuggested#cd773428 limit:int = contacts.Suggested;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|limit|qint32||
|callBack|Callback<ContactsSuggested\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ContactsSuggested](../../types/contactssuggested.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getSuggestedAnswer(qint64 msgId, const ContactsSuggested & result)`
* `getSuggestedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetSuggestedAnswer(qint64 msgId, const ContactsSuggested & result)`
* `onGetSuggestedError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_SUGGESTED_CALLBACK

## Examples:

`tg->getSuggested(limit, [=](TG_GET_SUGGESTED_CALLBACK){
    ...
}, 30000);`
