# ChannelBannedRights

## Types

* [typeChannelBannedRights](#channelbannedrightstypechannelbannedrights)

## ChannelBannedRights::typeChannelBannedRights

#### Schema:

```c++
channelBannedRights#58cf4249 flags:# view_messages:flags.0?true send_messages:flags.1?true send_media:flags.2?true send_stickers:flags.3?true send_gifs:flags.4?true send_games:flags.5?true send_inline:flags.6?true embed_links:flags.7?true until_date:int = ChannelBannedRights;
```

#### Parameters:

|Name|Type|
|----|----|
|viewMessages|bool|
|sendMessages|bool|
|sendMedia|bool|
|sendStickers|bool|
|sendGifs|bool|
|sendGames|bool|
|sendInline|bool|
|embedLinks|bool|
|untilDate|qint32|

