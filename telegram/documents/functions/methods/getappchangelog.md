# Help.getAppChangelog

## Function:

TelegramCore::helpGetAppChangelog

## Schema:

```c++
help.getAppChangelog#b921197a = help.AppChangelog;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;[HelpAppChangelog](../../types/helpappchangelog.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[HelpAppChangelog](../../types/helpappchangelog.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAppChangelogAnswer(qint64 msgId, const HelpAppChangelog & result)
```
```c++
getAppChangelogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAppChangelogAnswer(qint64 msgId, const HelpAppChangelog & result)
```
```c++
onGetAppChangelogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_APP_CHANGELOG_CALLBACK

## Examples:

```c++
tg->getAppChangelog([=](TG_GET_APP_CHANGELOG_CALLBACK){
    ...
}, 30000);
```
