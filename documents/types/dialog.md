# Dialog

## Types

* [typeDialog](#dialogtypedialog)

## Dialog::typeDialog

#### Schema:

```c++
dialog#66ffba14 flags:# peer:Peer top_message:int read_inbox_max_id:int read_outbox_max_id:int unread_count:int notify_settings:PeerNotifySettings pts:flags.0?int draft:flags.1?DraftMessage = Dialog;
```

#### Parameters:

|Name|Type|
|----|----|
|peer|[Peer](peer.md)|
|topMessage|qint32|
|readInboxMaxId|qint32|
|readOutboxMaxId|qint32|
|unreadCount|qint32|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|
|pts|qint32|
|draft|[DraftMessage](draftmessage.md)|

