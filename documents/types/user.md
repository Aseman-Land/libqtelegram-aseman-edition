# User

## Types

* [typeUserEmpty](#usertypeuserempty)
* [typeUser](#usertypeuser)

## User::typeUserEmpty

#### Schema:

```c++
userEmpty#200250ba id:int = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## User::typeUser

#### Schema:

```c++
user#2e13f4c3 flags:# self:flags.10?true contact:flags.11?true mutual_contact:flags.12?true deleted:flags.13?true bot:flags.14?true bot_chat_history:flags.15?true bot_nochats:flags.16?true verified:flags.17?true restricted:flags.18?true min:flags.20?true bot_inline_geo:flags.21?true id:int access_hash:flags.0?long first_name:flags.1?string last_name:flags.2?string username:flags.3?string phone:flags.4?string photo:flags.5?UserProfilePhoto status:flags.6?UserStatus bot_info_version:flags.14?int restriction_reason:flags.18?string bot_inline_placeholder:flags.19?string lang_code:flags.22?string = User;
```

#### Parameters:

|Name|Type|
|----|----|
|self|bool|
|contact|bool|
|mutualContact|bool|
|deleted|bool|
|bot|bool|
|botChatHistory|bool|
|botNochats|bool|
|verified|bool|
|restricted|bool|
|min|bool|
|botInlineGeo|bool|
|id|qint32|
|accessHash|qint64|
|firstName|QString|
|lastName|QString|
|username|QString|
|phone|QString|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|status|[UserStatus](userstatus.md)|
|botInfoVersion|qint32|
|restrictionReason|QString|
|botInlinePlaceholder|QString|
|langCode|QString|

