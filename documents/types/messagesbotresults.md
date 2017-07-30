# MessagesBotResults

## Types

* [typeMessagesBotResults](#messagesbotresultstypemessagesbotresults)

## MessagesBotResults::typeMessagesBotResults

#### Schema:

```c++
messages.botResults#ccd3563d flags:# gallery:flags.0?true query_id:long next_offset:flags.1?string switch_pm:flags.2?InlineBotSwitchPM results:Vector<BotInlineResult> cache_time:int = messages.BotResults;
```

#### Parameters:

|Name|Type|
|----|----|
|gallery|bool|
|queryId|qint64|
|nextOffset|QString|
|switchPm|[InlineBotSwitchPM](inlinebotswitchpm.md)|
|results|QList&lt;[BotInlineResult](botinlineresult.md)&gt;|
|cacheTime|qint32|

