# MessagesBotResults

## Types

* [typeMessagesBotResults](#messagesbotresultstypemessagesbotresults)

## MessagesBotResults::typeMessagesBotResults

#### Schema:

```c++
messages.botResults#256709a6 flags:# gallery:flags.0?true query_id:long next_offset:flags.1?string switch_pm:flags.2?InlineBotSwitchPM results:Vector<BotInlineResult> = messages.BotResults;
```

#### Parameters:

|Name|Type|
|----|----|
|gallery|bool|
|queryId|qint64|
|nextOffset|QString|
|switchPm|[InlineBotSwitchPM](inlinebotswitchpm.md)|
|results|QList&lt;[BotInlineResult](botinlineresult.md)&gt;|

