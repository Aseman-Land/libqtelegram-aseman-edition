# Contacts.getTopPeers

## Function:

TelegramCore::contactsGetTopPeers

## Schema:

```c++
contacts.getTopPeers#d4982db5 flags:# correspondents:flags.0?true bots_pm:flags.1?true bots_inline:flags.2?true phone_calls:flags.3?true groups:flags.10?true channels:flags.15?true offset:int limit:int hash:int = contacts.TopPeers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|correspondents|bool||
|botsPm|bool||
|botsInline|bool||
|phoneCalls|bool||
|groups|bool||
|channels|bool||
|offset|qint32||
|limit|qint32||
|hash|qint32||
|callBack|Callback&lt;[ContactsTopPeers](../../types/contactstoppeers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[ContactsTopPeers](../../types/contactstoppeers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getTopPeersAnswer(qint64 msgId, const ContactsTopPeers & result)
```
```c++
getTopPeersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetTopPeersAnswer(qint64 msgId, const ContactsTopPeers & result)
```
```c++
onGetTopPeersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_TOP_PEERS_CALLBACK

## Examples:

```c++
tg->getTopPeers(correspondents, bots_pm, bots_inline, phone_calls, groups, channels, offset, limit, hash, [=](TG_GET_TOP_PEERS_CALLBACK){
    ...
}, 30000);
```
