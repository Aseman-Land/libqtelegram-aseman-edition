# ChannelMessagesFilter

## Types

* [typeChannelMessagesFilterEmpty](#channelmessagesfiltertypechannelmessagesfilterempty)
* [typeChannelMessagesFilter](#channelmessagesfiltertypechannelmessagesfilter)

## ChannelMessagesFilter::typeChannelMessagesFilterEmpty

#### Schema:

```c++
channelMessagesFilterEmpty#94d42ee7 = ChannelMessagesFilter;
```

#### Parameters:


## ChannelMessagesFilter::typeChannelMessagesFilter

#### Schema:

```c++
channelMessagesFilter#cd77d957 flags:# exclude_new_messages:flags.1?true ranges:Vector<MessageRange> = ChannelMessagesFilter;
```

#### Parameters:

|Name|Type|
|----|----|
|excludeNewMessages|bool|
|ranges|QList&lt;[MessageRange](messagerange.md)&gt;|

