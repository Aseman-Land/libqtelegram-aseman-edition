# Contacts.getSuggested

## Function:

TelegramCore::contactsGetSuggested

## Schema:

```c++
contacts.getSuggested#cd773428 limit:int = contacts.Suggested;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|limit|qint32||
|callBack|Callback&lt;[ContactsSuggested](../../types/contactssuggested.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsSuggested](../../types/contactssuggested.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getSuggestedAnswer(qint64 msgId, const ContactsSuggested & result)
```
```c++
getSuggestedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetSuggestedAnswer(qint64 msgId, const ContactsSuggested & result)
```
```c++
onGetSuggestedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_SUGGESTED_CALLBACK

## Examples:

```c++
tg->getSuggested(limit, [=](TG_GET_SUGGESTED_CALLBACK){
    ...
}, 30000);
```
