# Account.updateProfile

## Function:

TelegramCore::accountUpdateProfile

## Schema:

`account.updateProfile#f0888d68 first_name:string last_name:string = User;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|firstName|QString||
|lastName|QString||
|callBack|Callback<User\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `updateProfileAnswer(qint64 msgId, const User & result)`
* `updateProfileError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onUpdateProfileAnswer(qint64 msgId, const User & result)`
* `onUpdateProfileError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_UPDATE_PROFILE_CALLBACK

## Examples:

`tg->updateProfile(first_name, last_name, [=](TG_UPDATE_PROFILE_CALLBACK){
    ...
}, 30000);`
