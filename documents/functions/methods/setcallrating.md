# Phone.setCallRating

## Function:

TelegramCore::phoneSetCallRating

## Schema:

```c++
phone.setCallRating#1c536a34 peer:InputPhoneCall rating:int comment:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPhoneCall](../../types/inputphonecall.md)||
|rating|qint32||
|comment|QString||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
setCallRatingAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
setCallRatingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSetCallRatingAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onSetCallRatingError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SET_CALL_RATING_CALLBACK

## Examples:

```c++
tg->setCallRating(peer, rating, comment, [=](TG_SET_CALL_RATING_CALLBACK){
    ...
}, 30000);
```
