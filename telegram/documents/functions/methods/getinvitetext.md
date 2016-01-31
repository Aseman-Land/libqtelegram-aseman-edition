# Help.getInviteText

## Function:

TelegramCore::helpGetInviteText

## Schema:

`help.getInviteText#a4a95186 lang_code:string = help.InviteText;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|langCode|QString||
|callBack|Callback<HelpInviteText\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[HelpInviteText](../../types/helpinvitetext.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getInviteTextAnswer(qint64 msgId, const HelpInviteText & result)`
* `getInviteTextError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetInviteTextAnswer(qint64 msgId, const HelpInviteText & result)`
* `onGetInviteTextError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_INVITE_TEXT_CALLBACK

## Examples:

`tg->getInviteText(lang_code, [=](TG_GET_INVITE_TEXT_CALLBACK){
    ...
}, 30000);`
