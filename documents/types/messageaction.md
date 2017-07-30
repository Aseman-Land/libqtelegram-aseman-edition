# MessageAction

## Types

* [typeMessageActionEmpty](#messageactiontypemessageactionempty)
* [typeMessageActionChatCreate](#messageactiontypemessageactionchatcreate)
* [typeMessageActionChatEditTitle](#messageactiontypemessageactionchatedittitle)
* [typeMessageActionChatEditPhoto](#messageactiontypemessageactionchateditphoto)
* [typeMessageActionChatDeletePhoto](#messageactiontypemessageactionchatdeletephoto)
* [typeMessageActionChatAddUser](#messageactiontypemessageactionchatadduser)
* [typeMessageActionChatDeleteUser](#messageactiontypemessageactionchatdeleteuser)
* [typeMessageActionChatJoinedByLink](#messageactiontypemessageactionchatjoinedbylink)
* [typeMessageActionChannelCreate](#messageactiontypemessageactionchannelcreate)
* [typeMessageActionChatMigrateTo](#messageactiontypemessageactionchatmigrateto)
* [typeMessageActionChannelMigrateFrom](#messageactiontypemessageactionchannelmigratefrom)
* [typeMessageActionPinMessage](#messageactiontypemessageactionpinmessage)
* [typeMessageActionHistoryClear](#messageactiontypemessageactionhistoryclear)
* [typeMessageActionGameScore](#messageactiontypemessageactiongamescore)
* [typeMessageActionPaymentSentMe](#messageactiontypemessageactionpaymentsentme)
* [typeMessageActionPaymentSent](#messageactiontypemessageactionpaymentsent)
* [typeMessageActionPhoneCall](#messageactiontypemessageactionphonecall)

## MessageAction::typeMessageActionEmpty

#### Schema:

```c++
messageActionEmpty#b6aef7b0 = MessageAction;
```

#### Parameters:


## MessageAction::typeMessageActionChatCreate

#### Schema:

```c++
messageActionChatCreate#a6638b9a title:string users:Vector<int> = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|title|QString|
|users|QList&lt;qint32&gt;|

## MessageAction::typeMessageActionChatEditTitle

#### Schema:

```c++
messageActionChatEditTitle#b5a1ce5a title:string = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|title|QString|

## MessageAction::typeMessageActionChatEditPhoto

#### Schema:

```c++
messageActionChatEditPhoto#7fcb13a8 photo:Photo = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|photo|[Photo](photo.md)|

## MessageAction::typeMessageActionChatDeletePhoto

#### Schema:

```c++
messageActionChatDeletePhoto#95e3fbef = MessageAction;
```

#### Parameters:


## MessageAction::typeMessageActionChatAddUser

#### Schema:

```c++
messageActionChatAddUser#488a7337 users:Vector<int> = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|users|QList&lt;qint32&gt;|

## MessageAction::typeMessageActionChatDeleteUser

#### Schema:

```c++
messageActionChatDeleteUser#b2ae9b0c user_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## MessageAction::typeMessageActionChatJoinedByLink

#### Schema:

```c++
messageActionChatJoinedByLink#f89cf5e8 inviter_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|inviterId|qint32|

## MessageAction::typeMessageActionChannelCreate

#### Schema:

```c++
messageActionChannelCreate#95d2ac92 title:string = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|title|QString|

## MessageAction::typeMessageActionChatMigrateTo

#### Schema:

```c++
messageActionChatMigrateTo#51bdb021 channel_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|

## MessageAction::typeMessageActionChannelMigrateFrom

#### Schema:

```c++
messageActionChannelMigrateFrom#b055eaee title:string chat_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|title|QString|
|chatId|qint32|

## MessageAction::typeMessageActionPinMessage

#### Schema:

```c++
messageActionPinMessage#94bd38ed = MessageAction;
```

#### Parameters:


## MessageAction::typeMessageActionHistoryClear

#### Schema:

```c++
messageActionHistoryClear#9fbab604 = MessageAction;
```

#### Parameters:


## MessageAction::typeMessageActionGameScore

#### Schema:

```c++
messageActionGameScore#92a72876 game_id:long score:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|gameId|qint64|
|score|qint32|

## MessageAction::typeMessageActionPaymentSentMe

#### Schema:

```c++
messageActionPaymentSentMe#8f31b327 flags:# currency:string total_amount:long payload:bytes info:flags.0?PaymentRequestedInfo shipping_option_id:flags.1?string charge:PaymentCharge = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|currency|QString|
|totalAmount|qint64|
|payload|QByteArray|
|info|[PaymentRequestedInfo](paymentrequestedinfo.md)|
|shippingOptionId|QString|
|charge|[PaymentCharge](paymentcharge.md)|

## MessageAction::typeMessageActionPaymentSent

#### Schema:

```c++
messageActionPaymentSent#40699cd0 currency:string total_amount:long = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|currency|QString|
|totalAmount|qint64|

## MessageAction::typeMessageActionPhoneCall

#### Schema:

```c++
messageActionPhoneCall#80e11a7f flags:# call_id:long reason:flags.0?PhoneCallDiscardReason duration:flags.1?int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|callId|qint64|
|reason|[PhoneCallDiscardReason](phonecalldiscardreason.md)|
|duration|qint32|

