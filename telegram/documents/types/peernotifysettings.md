# PeerNotifySettings

## Types

* [typePeerNotifySettingsEmpty](#peernotifysettingstypepeernotifysettingsempty)
* [typePeerNotifySettings](#peernotifysettingstypepeernotifysettings)

## PeerNotifySettings::typePeerNotifySettingsEmpty

#### Schema:

```c++
peerNotifySettingsEmpty#70a68512 = PeerNotifySettings;
```

#### Parameters:


## PeerNotifySettings::typePeerNotifySettings

#### Schema:

```c++
peerNotifySettings#8d5e11ee mute_until:int sound:string show_previews:Bool events_mask:int = PeerNotifySettings;
```

#### Parameters:

|Name|Type|
|----|----|
|muteUntil|qint32|
|sound|QString|
|showPreviews|bool|
|eventsMask|qint32|

