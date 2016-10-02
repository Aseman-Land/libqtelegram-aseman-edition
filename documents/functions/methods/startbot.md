# Messages.startBot

## Function:

TelegramCore::messagesStartBot

## Schema:

```c++
messages.startBot#e6df7378 bot:InputUser peer:InputPeer random_id:long start_param:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|bot|[InputUser](../../types/inputuser.md)||
|peer|[InputPeer](../../types/inputpeer.md)||
|randomId|qint64||
|startParam|QString||
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
startBotAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
startBotError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onStartBotAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onStartBotError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_START_BOT_CALLBACK

## Examples:

```c++
tg->startBot(bot, peer, random_id, start_param, [=](TG_START_BOT_CALLBACK){
    ...
}, 30000);
```
