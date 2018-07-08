# Langpack.getLangPack

## Function:

TelegramCore::langpackGetLangPack

## Schema:

```c++
langpack.getLangPack#9ab5c58e lang_code:string = LangPackDifference;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|langCode|QString||
|callBack|Callback&lt;[LangPackDifference](../../types/langpackdifference.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[LangPackDifference](../../types/langpackdifference.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getLangPackAnswer(qint64 msgId, const LangPackDifference & result)
```
```c++
getLangPackError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetLangPackAnswer(qint64 msgId, const LangPackDifference & result)
```
```c++
onGetLangPackError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_LANG_PACK_CALLBACK

## Examples:

```c++
tg->getLangPack(lang_code, [=](TG_GET_LANG_PACK_CALLBACK){
    ...
}, 30000);
```
