# UpdatesChannelDifference

## Types

* typeUpdatesChannelDifferenceEmpty
* typeUpdatesChannelDifferenceTooLong
* typeUpdatesChannelDifference

## UpdatesChannelDifference::typeUpdatesChannelDifferenceEmpty

#### Schema:

`updates.channelDifferenceEmpty#3e11affb flags:# final:flags.0?true pts:int timeout:flags.1?int = updates.ChannelDifference;`

#### Parameters:

|Name|Type|
|----|----|
|final|bool|
|pts|qint32|
|timeout|qint32|

## UpdatesChannelDifference::typeUpdatesChannelDifferenceTooLong

#### Schema:

`updates.channelDifferenceTooLong#5e167646 flags:# final:flags.0?true pts:int timeout:flags.1?int top_message:int top_important_message:int read_inbox_max_id:int unread_count:int unread_important_count:int messages:Vector<Message> chats:Vector<Chat> users:Vector<User> = updates.ChannelDifference;`

#### Parameters:

|Name|Type|
|----|----|
|final|bool|
|pts|qint32|
|timeout|qint32|
|topMessage|qint32|
|topImportantMessage|qint32|
|readInboxMaxId|qint32|
|unreadCount|qint32|
|unreadImportantCount|qint32|
|messages|QList<Message>|
|chats|QList<Chat>|
|users|QList<User>|

## UpdatesChannelDifference::typeUpdatesChannelDifference

#### Schema:

`updates.channelDifference#2064674e flags:# final:flags.0?true pts:int timeout:flags.1?int new_messages:Vector<Message> other_updates:Vector<Update> chats:Vector<Chat> users:Vector<User> = updates.ChannelDifference;`

#### Parameters:

|Name|Type|
|----|----|
|final|bool|
|pts|qint32|
|timeout|qint32|
|newMessages|QList<Message>|
|otherUpdates|QList<Update>|
|chats|QList<Chat>|
|users|QList<User>|

