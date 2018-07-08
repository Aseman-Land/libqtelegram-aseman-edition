# Langpack.getStrings

## Function:

TelegramCore::langpackGetStrings

## Schema:

```c++
langpack.getStrings#2e1ee318 lang_code:string keys:Vector<string> = Vector<LangPackString>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|langCode|QString||
|keys|QList&lt;QString&gt;||
|callBack|Callback&lt;QList&lt;[LangPackString](../../types/langpackstring.md)&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;[LangPackString](../../types/langpackstring.md)&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getStringsAnswer(qint64 msgId, const QList&lt;LangPackString&gt; & result)
```
```c++
getStringsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetStringsAnswer(qint64 msgId, const QList&lt;LangPackString&gt; & result)
```
```c++
onGetStringsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_STRINGS_CALLBACK

## Examples:

```c++
tg->getStrings(lang_code, keys, [=](TG_GET_STRINGS_CALLBACK){
    ...
}, 30000);
```
