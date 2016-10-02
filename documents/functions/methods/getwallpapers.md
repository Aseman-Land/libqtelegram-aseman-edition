# Account.getWallPapers

## Function:

TelegramCore::accountGetWallPapers

## Schema:

```c++
account.getWallPapers#c04cfac2 = Vector<WallPaper>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;QList&lt;[WallPaper](../../types/wallpaper.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[WallPaper](../../types/wallpaper.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getWallPapersAnswer(qint64 msgId, const QList&lt;WallPaper&gt; & result)
```
```c++
getWallPapersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetWallPapersAnswer(qint64 msgId, const QList&lt;WallPaper&gt; & result)
```
```c++
onGetWallPapersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_WALL_PAPERS_CALLBACK

## Examples:

```c++
tg->getWallPapers([=](TG_GET_WALL_PAPERS_CALLBACK){
    ...
}, 30000);
```
