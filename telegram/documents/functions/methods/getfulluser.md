# Users.getFullUser

## Function:

TelegramCore::usersGetFullUser

## Schema:

`users.getFullUser#ca30a5b1 id:InputUser = UserFull;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback<UserFull\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UserFull](../../types/userfull.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getFullUserAnswer(qint64 msgId, const UserFull & result)`
* `getFullUserError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetFullUserAnswer(qint64 msgId, const UserFull & result)`
* `onGetFullUserError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_FULL_USER_CALLBACK

## Examples:

`tg->getFullUser(id, [=](TG_GET_FULL_USER_CALLBACK){
    ...
}, 30000);`
