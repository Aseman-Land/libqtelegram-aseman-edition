# Messages.migrateChat

## Function:

TelegramCore::messagesMigrateChat

## Schema:

`messages.migrateChat#15a3b8e3 chat_id:int = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `migrateChatAnswer(qint64 msgId, const UpdatesType & result)`
* `migrateChatError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onMigrateChatAnswer(qint64 msgId, const UpdatesType & result)`
* `onMigrateChatError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_MIGRATE_CHAT_CALLBACK

## Examples:

`tg->migrateChat(chat_id, [=](TG_MIGRATE_CHAT_CALLBACK){
    ...
}, 30000);`
