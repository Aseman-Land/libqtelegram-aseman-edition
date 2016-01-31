# Messages.startBot

## Function:

TelegramCore::messagesStartBot

## Schema:

`messages.startBot#e6df7378 bot:InputUser peer:InputPeer random_id:long start_param:string = Updates;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|bot|[InputUser](../../types/inputuser.md)||
|peer|[InputPeer](../../types/inputpeer.md)||
|randomId|qint64||
|startParam|QString||
|callBack|Callback<UpdatesType\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `startBotAnswer(qint64 msgId, const UpdatesType & result)`
* `startBotError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onStartBotAnswer(qint64 msgId, const UpdatesType & result)`
* `onStartBotError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_START_BOT_CALLBACK

## Examples:

`tg->startBot(bot, peer, random_id, start_param, [=](TG_START_BOT_CALLBACK){
    ...
}, 30000);`
