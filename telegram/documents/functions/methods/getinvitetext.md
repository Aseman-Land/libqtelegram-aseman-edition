# Help.getInviteText

## Function:

TelegramCore::helpGetInviteText

## Schema:

```c++
help.getInviteText#4d392343 = help.InviteText;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[HelpInviteText](../../types/helpinvitetext.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[HelpInviteText](../../types/helpinvitetext.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getInviteTextAnswer(qint64 msgId, const HelpInviteText & result)
```
```c++
getInviteTextError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetInviteTextAnswer(qint64 msgId, const HelpInviteText & result)
```
```c++
onGetInviteTextError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_INVITE_TEXT_CALLBACK

## Examples:

```c++
tg->getInviteText([=](TG_GET_INVITE_TEXT_CALLBACK){
    ...
}, 30000);
```
