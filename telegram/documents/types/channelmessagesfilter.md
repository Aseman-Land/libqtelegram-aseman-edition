# ChannelMessagesFilter

## Types

* [typeChannelMessagesFilterEmpty](#channelmessagesfiltertypechannelmessagesfilterempty)
* [typeChannelMessagesFilter](#channelmessagesfiltertypechannelmessagesfilter)
* [typeChannelMessagesFilterCollapsed](#channelmessagesfiltertypechannelmessagesfiltercollapsed)

## ChannelMessagesFilter::typeChannelMessagesFilterEmpty

#### Schema:

`channelMessagesFilterEmpty#94d42ee7 = ChannelMessagesFilter;`

#### Parameters:


## ChannelMessagesFilter::typeChannelMessagesFilter

#### Schema:

`channelMessagesFilter#cd77d957 flags:# important_only:flags.0?true exclude_new_messages:flags.1?true ranges:Vector<MessageRange> = ChannelMessagesFilter;`

#### Parameters:

|Name|Type|
|----|----|
|importantOnly|bool|
|excludeNewMessages|bool|
|ranges|QList<MessageRange>|

## ChannelMessagesFilter::typeChannelMessagesFilterCollapsed

#### Schema:

`channelMessagesFilterCollapsed#fa01232e = ChannelMessagesFilter;`

#### Parameters:


