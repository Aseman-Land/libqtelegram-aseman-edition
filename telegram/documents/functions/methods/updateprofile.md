# Account.updateProfile

## Function:

TelegramCore::accountUpdateProfile

## Schema:

```c++
account.updateProfile#f0888d68 first_name:string last_name:string = User;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|firstName|QString||
|lastName|QString||
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
tg->updateProfile(first_name, last_name, [=](TG_UPDATE_PROFILE_CALLBACK){
    ...
}, 30000);
```
