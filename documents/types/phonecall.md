# PhoneCall

## Types

* [typePhoneCallEmpty](#phonecalltypephonecallempty)
* [typePhoneCallWaiting](#phonecalltypephonecallwaiting)
* [typePhoneCallRequested](#phonecalltypephonecallrequested)
* [typePhoneCallAccepted](#phonecalltypephonecallaccepted)
* [typePhoneCall](#phonecalltypephonecall)
* [typePhoneCallDiscarded](#phonecalltypephonecalldiscarded)

## PhoneCall::typePhoneCallEmpty

#### Schema:

```c++
phoneCallEmpty#5366c915 id:long = PhoneCall;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## PhoneCall::typePhoneCallWaiting

#### Schema:

```c++
phoneCallWaiting#1b8f4ad1 flags:# id:long access_hash:long date:int admin_id:int participant_id:int protocol:PhoneCallProtocol receive_date:flags.0?int = PhoneCall;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|
|protocol|[PhoneCallProtocol](phonecallprotocol.md)|
|receiveDate|qint32|

## PhoneCall::typePhoneCallRequested

#### Schema:

```c++
phoneCallRequested#83761ce4 id:long access_hash:long date:int admin_id:int participant_id:int g_a_hash:bytes protocol:PhoneCallProtocol = PhoneCall;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|
|gAHash|QByteArray|
|protocol|[PhoneCallProtocol](phonecallprotocol.md)|

## PhoneCall::typePhoneCallAccepted

#### Schema:

```c++
phoneCallAccepted#6d003d3f id:long access_hash:long date:int admin_id:int participant_id:int g_b:bytes protocol:PhoneCallProtocol = PhoneCall;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|
|gB|QByteArray|
|protocol|[PhoneCallProtocol](phonecallprotocol.md)|

## PhoneCall::typePhoneCall

#### Schema:

```c++
phoneCall#ffe6ab67 id:long access_hash:long date:int admin_id:int participant_id:int g_a_or_b:bytes key_fingerprint:long protocol:PhoneCallProtocol connection:PhoneConnection alternative_connections:Vector<PhoneConnection> start_date:int = PhoneCall;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|date|qint32|
|adminId|qint32|
|participantId|qint32|
|gAOrB|QByteArray|
|keyFingerprint|qint64|
|protocol|[PhoneCallProtocol](phonecallprotocol.md)|
|connection|[PhoneConnection](phoneconnection.md)|
|alternativeConnections|QList&lt;[PhoneConnection](phoneconnection.md)&gt;|
|startDate|qint32|

## PhoneCall::typePhoneCallDiscarded

#### Schema:

```c++
phoneCallDiscarded#50ca4de1 flags:# need_rating:flags.2?true need_debug:flags.3?true id:long reason:flags.0?PhoneCallDiscardReason duration:flags.1?int = PhoneCall;
```

#### Parameters:

|Name|Type|
|----|----|
|needRating|bool|
|needDebug|bool|
|id|qint64|
|reason|[PhoneCallDiscardReason](phonecalldiscardreason.md)|
|duration|qint32|

