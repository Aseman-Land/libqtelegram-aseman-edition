# Account.getWallPapers

## Function:

TelegramCore::accountGetWallPapers

## Schema:

`account.getWallPapers#c04cfac2 = Vector<WallPaper>;`
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback<QList<WallPaper>\>|0|
|timeout|qint32|TelegramCore::timeOut()|

## Result:

|Name|Type|
|----|----|
|return|qint64|
|callBack|[QList<WallPaper>](../../types/qlist<wallpaper>.md)|
|error|TelegramCore::CallbackError|

## Signals:

* `getWallPapersAnswer(qint64 msgId, const QList<WallPaper> & result)`
* `getWallPapersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Events:

* `onGetWallPapersAnswer(qint64 msgId, const QList<WallPaper> & result)`
* `onGetWallPapersError(qint64 msgId, qint32 errorCode, const QString &errorText)`

## Macros:

* TG_GET_WALL_PAPERS_CALLBACK

## Examples:

`tg->getWallPapers([=](TG_GET_WALL_PAPERS_CALLBACK){
    ...
}, 30000);`
