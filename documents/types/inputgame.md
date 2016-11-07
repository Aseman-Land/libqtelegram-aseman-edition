# InputGame

## Types

* [typeInputGameID](#inputgametypeinputgameid)
* [typeInputGameShortName](#inputgametypeinputgameshortname)

## InputGame::typeInputGameID

#### Schema:

```c++
inputGameID#32c3e77 id:long access_hash:long = InputGame;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|

## InputGame::typeInputGameShortName

#### Schema:

```c++
inputGameShortName#c331e80a bot_id:InputUser short_name:string = InputGame;
```

#### Parameters:

|Name|Type|
|----|----|
|botId|[InputUser](inputuser.md)|
|shortName|QString|

