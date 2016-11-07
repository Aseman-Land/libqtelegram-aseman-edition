# Game

## Types

* [typeGame](#gametypegame)

## Game::typeGame

#### Schema:

```c++
game#bdf9653b flags:# id:long access_hash:long short_name:string title:string description:string photo:Photo document:flags.0?Document = Game;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|shortName|QString|
|title|QString|
|description|QString|
|photo|[Photo](photo.md)|
|document|[Document](document.md)|

