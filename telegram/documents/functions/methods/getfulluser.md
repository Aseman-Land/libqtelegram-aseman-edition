# Users.getFullUser

## Function:

TelegramCore::usersGetFullUser

## Schema:

```c++
users.getFullUser#ca30a5b1 id:InputUser = UserFull;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback&lt;[UserFull](../../types/userfull.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UserFull](../../types/userfull.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getFullUserAnswer(qint64 msgId, const UserFull & result)
```
```c++
getFullUserError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetFullUserAnswer(qint64 msgId, const UserFull & result)
```
```c++
onGetFullUserError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_FULL_USER_CALLBACK

## Examples:

```c++
tg->getFullUser(id, [=](TG_GET_FULL_USER_CALLBACK){
    ...
}, 30000);
```
