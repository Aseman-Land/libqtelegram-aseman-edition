# DecryptedMessageAction

## Types

* [typeDecryptedMessageActionSetMessageTTLSecret8](#decryptedmessageactiontypedecryptedmessageactionsetmessagettlsecret8)
* [typeDecryptedMessageActionReadMessagesSecret8](#decryptedmessageactiontypedecryptedmessageactionreadmessagessecret8)
* [typeDecryptedMessageActionDeleteMessagesSecret8](#decryptedmessageactiontypedecryptedmessageactiondeletemessagessecret8)
* [typeDecryptedMessageActionScreenshotMessagesSecret8](#decryptedmessageactiontypedecryptedmessageactionscreenshotmessagessecret8)
* [typeDecryptedMessageActionFlushHistorySecret8](#decryptedmessageactiontypedecryptedmessageactionflushhistorysecret8)
* [typeDecryptedMessageActionResendSecret17](#decryptedmessageactiontypedecryptedmessageactionresendsecret17)
* [typeDecryptedMessageActionNotifyLayerSecret17](#decryptedmessageactiontypedecryptedmessageactionnotifylayersecret17)
* [typeDecryptedMessageActionTypingSecret17](#decryptedmessageactiontypedecryptedmessageactiontypingsecret17)
* [typeDecryptedMessageActionRequestKeySecret20](#decryptedmessageactiontypedecryptedmessageactionrequestkeysecret20)
* [typeDecryptedMessageActionAcceptKeySecret20](#decryptedmessageactiontypedecryptedmessageactionacceptkeysecret20)
* [typeDecryptedMessageActionAbortKeySecret20](#decryptedmessageactiontypedecryptedmessageactionabortkeysecret20)
* [typeDecryptedMessageActionCommitKeySecret20](#decryptedmessageactiontypedecryptedmessageactioncommitkeysecret20)
* [typeDecryptedMessageActionNoopSecret20](#decryptedmessageactiontypedecryptedmessageactionnoopsecret20)

## DecryptedMessageAction::typeDecryptedMessageActionSetMessageTTLSecret8

#### Schema:

```c++
decryptedMessageActionSetMessageTTL_Secret8#a1733aec ttl_seconds:int = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|ttlSeconds|qint32|

## DecryptedMessageAction::typeDecryptedMessageActionReadMessagesSecret8

#### Schema:

```c++
decryptedMessageActionReadMessages_Secret8#c4f40be random_ids:Vector<long> = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|randomIds|QList&lt;qint64&gt;|

## DecryptedMessageAction::typeDecryptedMessageActionDeleteMessagesSecret8

#### Schema:

```c++
decryptedMessageActionDeleteMessages_Secret8#65614304 random_ids:Vector<long> = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|randomIds|QList&lt;qint64&gt;|

## DecryptedMessageAction::typeDecryptedMessageActionScreenshotMessagesSecret8

#### Schema:

```c++
decryptedMessageActionScreenshotMessages_Secret8#8ac1f475 random_ids:Vector<long> = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|randomIds|QList&lt;qint64&gt;|

## DecryptedMessageAction::typeDecryptedMessageActionFlushHistorySecret8

#### Schema:

```c++
decryptedMessageActionFlushHistory_Secret8#6719e45c = DecryptedMessageAction;
```

#### Parameters:


## DecryptedMessageAction::typeDecryptedMessageActionResendSecret17

#### Schema:

```c++
decryptedMessageActionResend_Secret17#511110b0 start_seq_no:int end_seq_no:int = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|startSeqNo|qint32|
|endSeqNo|qint32|

## DecryptedMessageAction::typeDecryptedMessageActionNotifyLayerSecret17

#### Schema:

```c++
decryptedMessageActionNotifyLayer_Secret17#f3048883 layer:int = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|layer|qint32|

## DecryptedMessageAction::typeDecryptedMessageActionTypingSecret17

#### Schema:

```c++
decryptedMessageActionTyping_Secret17#ccb27641 action:SendMessageAction = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|action|[SendMessageAction](sendmessageaction.md)|

## DecryptedMessageAction::typeDecryptedMessageActionRequestKeySecret20

#### Schema:

```c++
decryptedMessageActionRequestKey_Secret20#f3c9611b exchange_id:long g_a:bytes = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|exchangeId|qint64|
|gA|QByteArray|

## DecryptedMessageAction::typeDecryptedMessageActionAcceptKeySecret20

#### Schema:

```c++
decryptedMessageActionAcceptKey_Secret20#6fe1735b exchange_id:long g_b:bytes key_fingerprint:long = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|exchangeId|qint64|
|gB|QByteArray|
|keyFingerprint|qint64|

## DecryptedMessageAction::typeDecryptedMessageActionAbortKeySecret20

#### Schema:

```c++
decryptedMessageActionAbortKey_Secret20#dd05ec6b exchange_id:long = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|exchangeId|qint64|

## DecryptedMessageAction::typeDecryptedMessageActionCommitKeySecret20

#### Schema:

```c++
decryptedMessageActionCommitKey_Secret20#ec2e0b9b exchange_id:long key_fingerprint:long = DecryptedMessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|exchangeId|qint64|
|keyFingerprint|qint64|

## DecryptedMessageAction::typeDecryptedMessageActionNoopSecret20

#### Schema:

```c++
decryptedMessageActionNoop_Secret20#a82fdd63 = DecryptedMessageAction;
```

#### Parameters:


