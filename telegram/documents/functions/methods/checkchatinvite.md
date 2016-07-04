# Messages.checkChatInvite

## Function:

TelegramCore::messagesCheckChatInvite

## Schema:

```c++
messages.checkChatInvite#3eadb1bb hash:string = ChatInvite;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback&lt;[ChatInvite](../../types/chatinvite.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ChatInvite](../../types/chatinvite.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
checkChatInviteAnswer(qint64 msgId, const ChatInvite & result)
```
```c++
checkChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCheckChatInviteAnswer(qint64 msgId, const ChatInvite & result)
```
```c++
onCheckChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CHECK_CHAT_INVITE_CALLBACK

## Examples:

```c++
tg->checkChatInvite(hash, [=](TG_CHECK_CHAT_INVITE_CALLBACK){
    ...
}, 30000);
```
