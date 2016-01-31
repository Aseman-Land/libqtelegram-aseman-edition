# Contacts.block

## Function:

TelegramCore::contactsBlock

## Schema:

`contacts.block#332b49fc id:InputUser = Bool;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback<bool\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[bool](../../types/bool.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `blockAnswer(qint64 msgId, bool  result)`
* `blockError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onBlockAnswer(qint64 msgId, bool  result)`
* `onBlockError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_BLOCK_CALLBACK

## Examples:

`tg->block(id, [=](TG_BLOCK_CALLBACK){
    ...
}, 30000);`
