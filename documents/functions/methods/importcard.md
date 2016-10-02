# Contacts.importCard

## Function:

TelegramCore::contactsImportCard

## Schema:

```c++
contacts.importCard#4fe196fe export_card:Vector<int> = User;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|exportCard|QList&lt;qint32&gt;||
|callBack|Callback&lt;[User](../../types/user.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
importCardAnswer(qint64 msgId, const User & result)
```
```c++
importCardError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onImportCardAnswer(qint64 msgId, const User & result)
```
```c++
onImportCardError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_IMPORT_CARD_CALLBACK

## Examples:

```c++
tg->importCard(export_card, [=](TG_IMPORT_CARD_CALLBACK){
    ...
}, 30000);
```
