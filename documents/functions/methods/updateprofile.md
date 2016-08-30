# Account.updateProfile

## Function:

TelegramCore::accountUpdateProfile

## Schema:

```c++
account.updateProfile#78515775 flags:# first_name:flags.0?string last_name:flags.1?string about:flags.2?string = User;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|firstName|QString||
|lastName|QString||
|about|QString||
|callBack|Callback&lt;[User](../../types/user.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
updateProfileAnswer(qint64 msgId, const User & result)
```
```c++
updateProfileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateProfileAnswer(qint64 msgId, const User & result)
```
```c++
onUpdateProfileError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_PROFILE_CALLBACK

## Examples:

```c++
tg->updateProfile(first_name, last_name, about, [=](TG_UPDATE_PROFILE_CALLBACK){
    ...
}, 30000);
```
