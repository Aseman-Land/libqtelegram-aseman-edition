# Messages.editChatTitle

## Function:

TelegramCore::messagesEditChatTitle

## Schema:

```c++
messages.editChatTitle#dc452855 chat_id:int title:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|chatId|qint32||
|title|QString||
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
editChatTitleAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
editChatTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditChatTitleAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onEditChatTitleError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_CHAT_TITLE_CALLBACK

## Examples:

```c++
tg->editChatTitle(chat_id, title, [=](TG_EDIT_CHAT_TITLE_CALLBACK){
    ...
}, 30000);
```
