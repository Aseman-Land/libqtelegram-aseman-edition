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
peerNotifySettings#9acda4c0 flags:# show_previews:flags.0?true silent:flags.1?true mute_until:int sound:string = PeerNotifySettings;
```

#### Parameters:

|Name|Type|
|----|----|
|showPreviews|bool|
|silent|bool|
|muteUntil|qint32|
|sound|QString|

