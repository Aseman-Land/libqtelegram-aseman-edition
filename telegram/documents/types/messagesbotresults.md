# MessagesBotResults

## Types

* [typeMessagesBotResults](#messagesbotresultstypemessagesbotresults)

## MessagesBotResults::typeMessagesBotResults

#### Schema:

```c++
messages.botResults#1170b0a3 flags:# gallery:flags.0?true query_id:long next_offset:flags.1?string results:Vector<BotInlineResult> = messages.BotResults;
```

#### Parameters:

|Name|Type|
|----|----|
|gallery|bool|
|queryId|qint64|
|nextOffset|QString|
|results|QList&lt;[BotInlineResult](botinlineresult.md)&gt;|

