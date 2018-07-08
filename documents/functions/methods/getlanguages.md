# Langpack.getLanguages

## Function:

TelegramCore::langpackGetLanguages

## Schema:

```c++
langpack.getLanguages#800fd57d = Vector<LangPackLanguage>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;QList&lt;[LangPackLanguage](../../types/langpacklanguage.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[LangPackLanguage](../../types/langpacklanguage.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getLanguagesAnswer(qint64 msgId, const QList&lt;LangPackLanguage&gt; & result)
```
```c++
getLanguagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetLanguagesAnswer(qint64 msgId, const QList&lt;LangPackLanguage&gt; & result)
```
```c++
onGetLanguagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_LANGUAGES_CALLBACK

## Examples:

```c++
tg->getLanguages([=](TG_GET_LANGUAGES_CALLBACK){
    ...
}, 30000);
```
