# Users.getUsers

## Function:

TelegramCore::usersGetUsers

## Schema:

`users.getUsers#d91a548 id:Vector<InputUser> = Vector<User>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|QList<InputUser>||
|callBack|Callback<QList<User>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<User>](../../types/qlist<user>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getUsersAnswer(qint64 msgId, const QList<User> & result)`
* `getUsersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetUsersAnswer(qint64 msgId, const QList<User> & result)`
* `onGetUsersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_USERS_CALLBACK

## Examples:

`tg->getUsers(id, [=](TG_GET_USERS_CALLBACK){
    ...
}, 30000);`
