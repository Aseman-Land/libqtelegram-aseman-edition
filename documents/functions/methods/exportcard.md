# Contacts.exportCard

## Function:

TelegramCore::contactsExportCard

## Schema:

```c++
contacts.exportCard#84e53737 = Vector<int>;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|callBack|Callback&lt;QList&lt;qint32&gt;&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|QList&lt;qint32&gt;|
|error|TelegramCore::CallbackError|

## Signals:

```c++
exportCardAnswer(qint64 msgId, const QList&lt;qint32&gt; & result)
```
```c++
exportCardError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onExportCardAnswer(qint64 msgId, const QList&lt;qint32&gt; & result)
```
```c++
onExportCardError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EXPORT_CARD_CALLBACK

## Examples:

```c++
tg->exportCard([=](TG_EXPORT_CARD_CALLBACK){
    ...
}, 30000);
```
