# Config

## Types

* [typeConfig](#configtypeconfig)

## Config::typeConfig

#### Schema:

```c++
config#9a6b2e2a flags:# date:int expires:int test_mode:Bool this_dc:int dc_options:Vector<DcOption> chat_size_max:int megagroup_size_max:int forwarded_count_max:int online_update_period_ms:int offline_blur_timeout_ms:int offline_idle_timeout_ms:int online_cloud_timeout_ms:int notify_cloud_delay_ms:int notify_default_delay_ms:int chat_big_size:int push_chat_period_ms:int push_chat_limit:int saved_gifs_limit:int edit_time_limit:int rating_e_decay:int stickers_recent_limit:int tmp_sessions:flags.0?int disabled_features:Vector<DisabledFeature> = Config;
```

#### Parameters:

|Name|Type|
|----|----|
|date|qint32|
|expires|qint32|
|testMode|bool|
|thisDc|qint32|
|dcOptions|QList&lt;[DcOption](dcoption.md)&gt;|
|chatSizeMax|qint32|
|megagroupSizeMax|qint32|
|forwardedCountMax|qint32|
|onlineUpdatePeriodMs|qint32|
|offlineBlurTimeoutMs|qint32|
|offlineIdleTimeoutMs|qint32|
|onlineCloudTimeoutMs|qint32|
|notifyCloudDelayMs|qint32|
|notifyDefaultDelayMs|qint32|
|chatBigSize|qint32|
|pushChatPeriodMs|qint32|
|pushChatLimit|qint32|
|savedGifsLimit|qint32|
|editTimeLimit|qint32|
|ratingEDecay|qint32|
|stickersRecentLimit|qint32|
|tmpSessions|qint32|
|disabledFeatures|QList&lt;[DisabledFeature](disabledfeature.md)&gt;|

