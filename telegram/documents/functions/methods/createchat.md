# Messages.createChat

## Function:

TelegramCore::messagesCreateChat

## Schema:

`messages.createChat#9cb126e users:Vector<InputUser> title:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|users|QList<InputUser>||
|title|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `createChatAnswer(qint64 msgId, const UpdatesType & result)`
* `createChatError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onCreateChatAnswer(qint64 msgId, const UpdatesType & result)`
* `onCreateChatError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CREATE_CHAT_CALLBACK

## Examples:

`tg->createChat(users, title, [=](TG_CREATE_CHAT_CALLBACK){
    ...
}, 30000);`
