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
* [typeUpdateNewAuthorization](#updatetypeupdatenewauthorization)
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
* [typeUpdateChannelGroup](#updatetypeupdatechannelgroup)
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

## Update::typeUpdateNewAuthorization

#### Schema:

```c++
updateNewAuthorization#8f06529a auth_key_id:long date:int device:string location:string = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|authKeyId|qint64|
|date|qint32|
|device|QString|
|location|QString|

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
updateServiceNotification#382dd3e4 type:string message:string media:MessageMedia popup:Bool = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|type|QString|
|message|QString|
|media|[MessageMedia](messagemedia.md)|
|popup|bool|

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

## Update::typeUpdateChannelGroup

#### Schema:

```c++
updateChannelGroup#c36c1e3c channel_id:int group:MessageGroup = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|channelId|qint32|
|group|[MessageGroup](messagegroup.md)|

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
updateStickerSetsOrder#f0dfb451 order:Vector<long> = Update;
```

#### Parameters:

|Name|Type|
|----|----|
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
updateBotCallbackQuery#a68c688c query_id:long user_id:int peer:Peer msg_id:int data:bytes = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|peer|[Peer](peer.md)|
|msgId|qint32|
|data|QByteArray|

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
updateInlineBotCallbackQuery#2cbd95af query_id:long user_id:int msg_id:InputBotInlineMessageID data:bytes = Update;
```

#### Parameters:

|Name|Type|
|----|----|
|queryId|qint64|
|userId|qint32|
|msgId|[InputBotInlineMessageID](inputbotinlinemessageid.md)|
|data|QByteArray|

