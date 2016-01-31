# Users.getUsers

## Function:

TelegramCore::usersGetUsers

## Schema:

```c++
users.getUsers#d91a548 id:Vector<InputUser> = Vector<User>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList&lt;[InputUser](../../types/inputuser.md)&gt;||
|callBack|Callback&lt;QList&lt;[User](../../types/user.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[User](../../types/user.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getUsersAnswer(qint64 msgId, const QList&lt;User&gt; & result)
```
```c++
getUsersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetUsersAnswer(qint64 msgId, const QList&lt;User&gt; & result)
```
```c++
onGetUsersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_USERS_CALLBACK

## Examples:

```c++
tg->getUsers(id, [=](TG_GET_USERS_CALLBACK){
    ...
}, 30000);
```
