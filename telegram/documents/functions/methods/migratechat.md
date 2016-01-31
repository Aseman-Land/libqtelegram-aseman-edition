# Messages.migrateChat

## Function:

TelegramCore::messagesMigrateChat

## Schema:

```c++
messages.migrateChat#15a3b8e3 chat_id:int = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
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
migrateChatAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
migrateChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onMigrateChatAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onMigrateChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_MIGRATE_CHAT_CALLBACK

## Examples:

```c++
tg->migrateChat(chat_id, [=](TG_MIGRATE_CHAT_CALLBACK){
    ...
}, 30000);
```
