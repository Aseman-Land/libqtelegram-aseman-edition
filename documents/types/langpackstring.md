# LangPackString

## Types

* [typeLangPackString](#langpackstringtypelangpackstring)
* [typeLangPackStringPluralized](#langpackstringtypelangpackstringpluralized)
* [typeLangPackStringDeleted](#langpackstringtypelangpackstringdeleted)

## LangPackString::typeLangPackString

#### Schema:

```c++
langPackString#cad181f6 key:string value:string = LangPackString;
```

#### Parameters:

|Name|Type|
|----|----|
|key|QString|
|value|QString|

## LangPackString::typeLangPackStringPluralized

#### Schema:

```c++
langPackStringPluralized#6c47ac9f flags:# key:string zero_value:flags.0?string one_value:flags.1?string two_value:flags.2?string few_value:flags.3?string many_value:flags.4?string other_value:string = LangPackString;
```

#### Parameters:

|Name|Type|
|----|----|
|key|QString|
|zeroValue|QString|
|oneValue|QString|
|twoValue|QString|
|fewValue|QString|
|manyValue|QString|
|otherValue|QString|

## LangPackString::typeLangPackStringDeleted

#### Schema:

```c++
langPackStringDeleted#2979eeb2 key:string = LangPackString;
```

#### Parameters:

|Name|Type|
|----|----|
|key|QString|

