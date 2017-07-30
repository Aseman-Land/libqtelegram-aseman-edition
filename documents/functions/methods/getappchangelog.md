# Help.getAppChangelog

## Function:

TelegramCore::helpGetAppChangelog

## Schema:

```c++
help.getAppChangelog#9010ef6f prev_app_version:string = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|prevAppVersion|QString||
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
getAppChangelogAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
getAppChangelogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAppChangelogAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onGetAppChangelogError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_APP_CHANGELOG_CALLBACK

## Examples:

```c++
tg->getAppChangelog(prev_app_version, [=](TG_GET_APP_CHANGELOG_CALLBACK){
    ...
}, 30000);
```
