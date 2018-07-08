# Update

## Types

* [typeUpdateNewMessage](#updatetypeupdatenewmessage)
* [typeUpdateMessageID](#updatetypeupdatemessageid)
* [typeUpdateDeleteMessages](#updatetypeupdatedeletemessages)
* [typeUpdateUserTyping](#updatetypeupdateusertyping)
* [typeUpdateChatUserTyping](#updatetypeupdatechatusertyping)
* [typeUpdateChatParticipants](#updatetypeupdatechatparticipants)
* [typeUpdateUserStatus](#updatetypeupdateuserstatus)
* [typeUpdateUserName](#updatetypeupdateusername)
* [typeUpdateUserPhoto](#updatetypeupdateuserphoto)
* [typeUpdateContactRegistered](#updatetypeupdatecontactregistered)
* [typeUpdateContactLink](#updatetypeupdatecontactlink)
* [typeUpdateNewEncryptedMessage](#updatetypeupdatenewencryptedmessage)
* [typeUpdateEncryptedChatTyping](#updatetypeupdateencryptedchattyping)
* [typeUpdateEncryption](#updatetypeupdateencryption)
* [typeUpdateEncryptedMessagesRead](#updatetypeupdateencryptedmessagesread)
* [typeUpdateChatParticipantAdd](#updatetypeupdatechatparticipantadd)
* [typeUpdateChatParticipantDelete](#updatetypeupdatechatparticipantdelete)
* [typeUpdateDcOptions](#updatetypeupdatedcoptions)
* [typeUpdateUserBlocked](#updatetypeupdateuserblocked)
* [typeUpdateNotifySettings](#updatetypeupdatenotifysettings)
* [typeUpdateServiceNotification](#updatetypeupdateservicenotification)
* [typeUpdatePrivacy](#updatetypeupdateprivacy)
* [typeUpdateUserPhone](#updatetypeupdateuserphone)
* [typeUpdateReadHistoryInbox](#updatetypeupdatereadhistoryinbox)
* [typeUpdateReadHistoryOutbox](#updatetypeupdatereadhistoryoutbox)
* [typeUpdateWebPage](#updatetypeupdatewebpage)
* [typeUpdateReadMessagesContents](#updatetypeupdatereadmessagescontents)
* [typeUpdateChannelTooLong](#updatetypeupdatechanneltoolong)
* [typeUpdateChannel](#updatetypeupdatechannel)
* [typeUpdateNewChannelMessage](#updatetypeupdatenewchannelmessage)
* [typeUpdateReadChannelInbox](#updatetypeupdatereadchannelinbox)
* [typeUpdateDeleteChannelMessages](#updatetypeupdatedeletechannelmessages)
* [typeUpdateChannelMessageViews](#updatetypeupdatechannelmessageviews)
* [typeUpdateChatAdmins](#updatetypeupdatechatadmins)
* [typeUpdateChatParticipantAdmin](#updatetypeupdatechatparticipantadmin)
* [typeUpdateNewStickerSet](#updatetypeupdatenewstickerset)
* [typeUpdateStickerSetsOrder](#updatetypeupdatestickersetsorder)
* [typeUpdateStickerSets](#updatetypeupdatestickersets)
* [typeUpdateSavedGifs](#updatetypeupdatesavedgifs)
* [typeUpdateBotInlineQuery](#updatetypeupdatebotinlinequery)
* [typeUpdateBotInlineSend](#updatetypeupdatebotinlinesend)
* [typeUpdateEditChannelMessage](#updatetypeupdateeditchannelmessage)
* [typeUpdateChannelPinnedMessage](#updatetypeupdatechannelpinnedmessage)
* [typeUpdateBotCallbackQuery](#updatetypeupdatebotcallbackquery)
* [typeUpdateEditMessage](#updatetypeupdateeditmessage)
* [typeUpdateInlineBotCallbackQuery](#updatetypeupdateinlinebotcallbackquery)
* [typeUpdateReadChannelOutbox](#updatetypeupdatereadchanneloutbox)
* [typeUpdateDraftMessage](#updatetypeupdatedraftmessage)
* [typeUpdateReadFeaturedStickers](#updatetypeupdatereadfeaturedstickers)
* [typeUpdateRecentStickers](#updatetypeupdaterecentstickers)
* [typeUpdateConfig](#updatetypeupdateconfig)
* [typeUpdatePtsChanged](#updatetypeupdateptschanged)
* [typeUpdateChannelWebPage](#updatetypeupdatechannelwebpage)
* [typeUpdateDialogPinned](#updatetypeupdatedialogpinned)
* [typeUpdatePinnedDialogs](#updatetypeupdatepinneddialogs)
* [typeUpdateBotWebhookJSON](#updatetypeupdatebotwebhookjson)
* [typeUpdateBotWebhookJSONQuery](#updatetypeupdatebotwebhookjsonquery)
* [typeUpdateBotShippingQuery](#updatetypeupdatebotshippingquery)
* [typeUpdateBotPrecheckoutQuery](#updatetypeupdatebotprecheckoutquery)
* [typeUpdatePhoneCall](#updatetypeupdatephonecall)
* [typeUpdateLangPackTooLong](#updatetypeupdatelangpacktoolong)
* [typeUpdateLangPack](#updatetypeupdatelangpack)

## Update::typeUpdateNewMessage

#### Schema:

```c++
updateNewMessage#1f2b0afd message:Message pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[Message](message.md)|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateMessageID

#### Schema:

```c++
updateMessageID#4e90bfd6 id:int random_id:long = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|randomId|qint64|

## Update::typeUpdateDeleteMessages

#### Schema:

```c++
updateDeleteMessages#a20db0e5 messages:Vector<int> pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|messages|QList&lt;qint32&gt;|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateUserTyping

#### Schema:

```c++
updateUserTyping#5c486927 user_id:int action:SendMessageAction = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|action|[SendMessageAction](sendmessageaction.md)|

## Update::typeUpdateChatUserTyping

#### Schema:

```c++
updateChatUserTyping#9a65ea1f chat_id:int user_id:int action:SendMessageAction = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|userId|qint32|
|action|[SendMessageAction](sendmessageaction.md)|

## Update::typeUpdateChatParticipants

#### Schema:

```c++
updateChatParticipants#7761198 participants:ChatParticipants = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|participants|[ChatParticipants](chatparticipants.md)|

## Update::typeUpdateUserStatus

#### Schema:

```c++
updateUserStatus#1bfbd823 user_id:int status:UserStatus = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|status|[UserStatus](userstatus.md)|

## Update::typeUpdateUserName

#### Schema:

```c++
updateUserName#a7332b73 user_id:int first_name:string last_name:string username:string = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|firstName|QString|
|lastName|QString|
|username|QString|

## Update::typeUpdateUserPhoto

#### Schema:

```c++
updateUserPhoto#95313b0c user_id:int date:int photo:UserProfilePhoto previous:Bool = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|date|qint32|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|previous|bool|

## Update::typeUpdateContactRegistered

#### Schema:

```c++
updateContactRegistered#2575bbb9 user_id:int date:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|date|qint32|

## Update::typeUpdateContactLink

#### Schema:

```c++
updateContactLink#9d2e67c5 user_id:int my_link:ContactLink foreign_link:ContactLink = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|myLink|[ContactLink](contactlink.md)|
|foreignLink|[ContactLink](contactlink.md)|

## Update::typeUpdateNewEncryptedMessage

#### Schema:

```c++
updateNewEncryptedMessage#12bcbd9a message:EncryptedMessage qts:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[EncryptedMessage](encryptedmessage.md)|
|qts|qint32|

## Update::typeUpdateEncryptedChatTyping

#### Schema:

```c++
updateEncryptedChatTyping#1710f156 chat_id:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|

## Update::typeUpdateEncryption

#### Schema:

```c++
updateEncryption#b4a2e88d chat:EncryptedChat date:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chat|[EncryptedChat](encryptedchat.md)|
|date|qint32|

## Update::typeUpdateEncryptedMessagesRead

#### Schema:

```c++
updateEncryptedMessagesRead#38fe25b7 chat_id:int max_date:int date:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|maxDate|qint32|
|date|qint32|

## Update::typeUpdateChatParticipantAdd

#### Schema:

```c++
updateChatParticipantAdd#ea4b0e5c chat_id:int user_id:int inviter_id:int date:int version:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|userId|qint32|
|inviterId|qint32|
|date|qint32|
|version|qint32|

## Update::typeUpdateChatParticipantDelete

#### Schema:

```c++
updateChatParticipantDelete#6e5f8c22 chat_id:int user_id:int version:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|userId|qint32|
|version|qint32|

## Update::typeUpdateDcOptions

#### Schema:

```c++
updateDcOptions#8e5e9873 dc_options:Vector<DcOption> = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|dcOptions|QList&lt;[DcOption](dcoption.md)&gt;|

## Update::typeUpdateUserBlocked

#### Schema:

```c++
updateUserBlocked#80ece81a user_id:int blocked:Bool = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|blocked|bool|

## Update::typeUpdateNotifySettings

#### Schema:

```c++
updateNotifySettings#bec268ef peer:NotifyPeer notify_settings:PeerNotifySettings = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|peer|[NotifyPeer](notifypeer.md)|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|

## Update::typeUpdateServiceNotification

#### Schema:

```c++
updateServiceNotification#ebe46819 flags:# popup:flags.0?true inbox_date:flags.1?int type:string message:string media:MessageMedia entities:Vector<MessageEntity> = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|popup|bool|
|inboxDate|qint32|
|type|QString|
|message|QString|
|media|[MessageMedia](messagemedia.md)|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

## Update::typeUpdatePrivacy

#### Schema:

```c++
updatePrivacy#ee3b272a key:PrivacyKey rules:Vector<PrivacyRule> = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|key|[PrivacyKey](privacykey.md)|
|rules|QList&lt;[PrivacyRule](privacyrule.md)&gt;|

## Update::typeUpdateUserPhone

#### Schema:

```c++
updateUserPhone#12b9417b user_id:int phone:string = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|phone|QString|

## Update::typeUpdateReadHistoryInbox

#### Schema:

```c++
updateReadHistoryInbox#9961fd5c peer:Peer max_id:int pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|peer|[Peer](peer.md)|
|maxId|qint32|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateReadHistoryOutbox

#### Schema:

```c++
updateReadHistoryOutbox#2f2f21bf peer:Peer max_id:int pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|peer|[Peer](peer.md)|
|maxId|qint32|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateWebPage

#### Schema:

```c++
updateWebPage#7f891213 webpage:WebPage pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|webpage|[WebPage](webpage.md)|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateReadMessagesContents

#### Schema:

```c++
updateReadMessagesContents#68c13933 messages:Vector<int> pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|messages|QList&lt;qint32&gt;|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateChannelTooLong

#### Schema:

```c++
updateChannelTooLong#eb0467fb flags:# channel_id:int pts:flags.0?int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|pts|qint32|

## Update::typeUpdateChannel

#### Schema:

```c++
updateChannel#b6d45656 channel_id:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|

## Update::typeUpdateNewChannelMessage

#### Schema:

```c++
updateNewChannelMessage#62ba04d9 message:Message pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[Message](message.md)|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateReadChannelInbox

#### Schema:

```c++
updateReadChannelInbox#4214f37f channel_id:int max_id:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|maxId|qint32|

## Update::typeUpdateDeleteChannelMessages

#### Schema:

```c++
updateDeleteChannelMessages#c37521c9 channel_id:int messages:Vector<int> pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|messages|QList&lt;qint32&gt;|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateChannelMessageViews

#### Schema:

```c++
updateChannelMessageViews#98a12b4b channel_id:int id:int views:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|id|qint32|
|views|qint32|

## Update::typeUpdateChatAdmins

#### Schema:

```c++
updateChatAdmins#6e947941 chat_id:int enabled:Bool version:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|enabled|bool|
|version|qint32|

## Update::typeUpdateChatParticipantAdmin

#### Schema:

```c++
updateChatParticipantAdmin#b6901959 chat_id:int user_id:int is_admin:Bool version:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|userId|qint32|
|isAdmin|bool|
|version|qint32|

## Update::typeUpdateNewStickerSet

#### Schema:

```c++
updateNewStickerSet#688a30aa stickerset:messages.StickerSet = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|stickerset|[MessagesStickerSet](messagesstickerset.md)|

## Update::typeUpdateStickerSetsOrder

#### Schema:

```c++
updateStickerSetsOrder#bb2d201 flags:# masks:flags.0?true order:Vector<long> = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|masks|bool|
|order|QList&lt;qint64&gt;|

## Update::typeUpdateStickerSets

#### Schema:

```c++
updateStickerSets#43ae3dec = Update;
```

#### Parameters:


## Update::typeUpdateSavedGifs

#### Schema:

```c++
updateSavedGifs#9375341e = Update;
```

#### Parameters:


## Update::typeUpdateBotInlineQuery

#### Schema:

```c++
updateBotInlineQuery#54826690 flags:# query_id:long user_id:int query:string geo:flags.0?GeoPoint offset:string = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|query|QString|
|geo|[GeoPoint](geopoint.md)|
|offset|QString|

## Update::typeUpdateBotInlineSend

#### Schema:

```c++
updateBotInlineSend#e48f964 flags:# user_id:int query:string geo:flags.0?GeoPoint id:string msg_id:flags.1?InputBotInlineMessageID = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|query|QString|
|geo|[GeoPoint](geopoint.md)|
|id|QString|
|msgId|[InputBotInlineMessageID](inputbotinlinemessageid.md)|

## Update::typeUpdateEditChannelMessage

#### Schema:

```c++
updateEditChannelMessage#1b3f4df7 message:Message pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[Message](message.md)|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateChannelPinnedMessage

#### Schema:

```c++
updateChannelPinnedMessage#98592475 channel_id:int id:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|id|qint32|

## Update::typeUpdateBotCallbackQuery

#### Schema:

```c++
updateBotCallbackQuery#e73547e1 flags:# query_id:long user_id:int peer:Peer msg_id:int chat_instance:long data:flags.0?bytes game_short_name:flags.1?string = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|peer|[Peer](peer.md)|
|msgId|qint32|
|chatInstance|qint64|
|data|QByteArray|
|gameShortName|QString|

## Update::typeUpdateEditMessage

#### Schema:

```c++
updateEditMessage#e40370a3 message:Message pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|message|[Message](message.md)|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateInlineBotCallbackQuery

#### Schema:

```c++
updateInlineBotCallbackQuery#f9d27a5a flags:# query_id:long user_id:int msg_id:InputBotInlineMessageID chat_instance:long data:flags.0?bytes game_short_name:flags.1?string = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|msgId|[InputBotInlineMessageID](inputbotinlinemessageid.md)|
|chatInstance|qint64|
|data|QByteArray|
|gameShortName|QString|

## Update::typeUpdateReadChannelOutbox

#### Schema:

```c++
updateReadChannelOutbox#25d6c9c7 channel_id:int max_id:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|maxId|qint32|

## Update::typeUpdateDraftMessage

#### Schema:

```c++
updateDraftMessage#ee2bb969 peer:Peer draft:DraftMessage = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|peer|[Peer](peer.md)|
|draft|[DraftMessage](draftmessage.md)|

## Update::typeUpdateReadFeaturedStickers

#### Schema:

```c++
updateReadFeaturedStickers#571d2742 = Update;
```

#### Parameters:


## Update::typeUpdateRecentStickers

#### Schema:

```c++
updateRecentStickers#9a422c20 = Update;
```

#### Parameters:


## Update::typeUpdateConfig

#### Schema:

```c++
updateConfig#a229dd06 = Update;
```

#### Parameters:


## Update::typeUpdatePtsChanged

#### Schema:

```c++
updatePtsChanged#3354678f = Update;
```

#### Parameters:


## Update::typeUpdateChannelWebPage

#### Schema:

```c++
updateChannelWebPage#40771900 channel_id:int webpage:WebPage pts:int pts_count:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|webpage|[WebPage](webpage.md)|
|pts|qint32|
|ptsCount|qint32|

## Update::typeUpdateDialogPinned

#### Schema:

```c++
updateDialogPinned#d711a2cc flags:# pinned:flags.0?true peer:Peer = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|pinned|bool|
|peer|[Peer](peer.md)|

## Update::typeUpdatePinnedDialogs

#### Schema:

```c++
updatePinnedDialogs#d8caf68d flags:# order:flags.0?Vector<Peer> = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|order|QList&lt;[Peer](peer.md)&gt;|

## Update::typeUpdateBotWebhookJSON

#### Schema:

```c++
updateBotWebhookJSON#8317c0c3 data:DataJSON = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|data|[DataJSON](datajson.md)|

## Update::typeUpdateBotWebhookJSONQuery

#### Schema:

```c++
updateBotWebhookJSONQuery#9b9240a6 query_id:long data:DataJSON timeout:int = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|data|[DataJSON](datajson.md)|
|timeout|qint32|

## Update::typeUpdateBotShippingQuery

#### Schema:

```c++
updateBotShippingQuery#e0cdc940 query_id:long user_id:int payload:bytes shipping_address:PostAddress = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|payload|QByteArray|
|shippingAddress|[PostAddress](postaddress.md)|

## Update::typeUpdateBotPrecheckoutQuery

#### Schema:

```c++
updateBotPrecheckoutQuery#5d2f3aa9 flags:# query_id:long user_id:int payload:bytes info:flags.0?PaymentRequestedInfo shipping_option_id:flags.1?string currency:string total_amount:long = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|payload|QByteArray|
|info|[PaymentRequestedInfo](paymentrequestedinfo.md)|
|shippingOptionId|QString|
|currency|QString|
|totalAmount|qint64|

## Update::typeUpdatePhoneCall

#### Schema:

```c++
updatePhoneCall#ab0f6b1e phone_call:PhoneCall = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneCall|[PhoneCall](phonecall.md)|

## Update::typeUpdateLangPackTooLong

#### Schema:

```c++
updateLangPackTooLong#10c2404b = Update;
```

#### Parameters:


## Update::typeUpdateLangPack

#### Schema:

```c++
updateLangPack#56022f4d difference:LangPackDifference = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|difference|[LangPackDifference](langpackdifference.md)|

