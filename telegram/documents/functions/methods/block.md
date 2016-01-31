# Contacts.block

## Function:

TelegramCore::contactsBlock

## Schema:

```c++
contacts.block#332b49fc id:InputUser = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|id|[InputUser](../../types/inputuser.md)||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
blockAnswer(qint64 msgId, bool  result)
```
```c++
blockError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onBlockAnswer(qint64 msgId, bool  result)
```
```c++
onBlockError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_BLOCK_CALLBACK

## Examples:

```c++
tg->block(id, [=](TG_BLOCK_CALLBACK){
    ...
}, 30000);
```
