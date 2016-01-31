# Dialog

## Types

* [typeDialog](#dialogtypedialog)
* [typeDialogChannel](#dialogtypedialogchannel)

## Dialog::typeDialog

#### Schema:

`dialog#c1dd804a peer:Peer top_message:int read_inbox_max_id:int unread_count:int notify_settings:PeerNotifySettings = Dialog;`

#### Parameters:

|Name|Type|
|----|----|
|peer|[Peer](peer.md)|
|topMessage|qint32|
|readInboxMaxId|qint32|
|unreadCount|qint32|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|

## Dialog::typeDialogChannel

#### Schema:

`dialogChannel#5b8496b2 peer:Peer top_message:int top_important_message:int read_inbox_max_id:int unread_count:int unread_important_count:int notify_settings:PeerNotifySettings pts:int = Dialog;`

#### Parameters:

|Name|Type|
|----|----|
|peer|[Peer](peer.md)|
|topMessage|qint32|
|topImportantMessage|qint32|
|readInboxMaxId|qint32|
|unreadCount|qint32|
|unreadImportantCount|qint32|
|notifySettings|[PeerNotifySettings](peernotifysettings.md)|
|pts|qint32|

