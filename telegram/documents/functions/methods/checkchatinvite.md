# Messages.checkChatInvite

## Function:

TelegramCore::messagesCheckChatInvite

## Schema:

`messages.checkChatInvite#3eadb1bb hash:string = ChatInvite;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback<ChatInvite\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[ChatInvite](../../types/chatinvite.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `checkChatInviteAnswer(qint64 msgId, const ChatInvite & result)`
* `checkChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onCheckChatInviteAnswer(qint64 msgId, const ChatInvite & result)`
* `onCheckChatInviteError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_CHECK_CHAT_INVITE_CALLBACK

## Examples:

`tg->checkChatInvite(hash, [=](TG_CHECK_CHAT_INVITE_CALLBACK){
    ...
}, 30000);`
