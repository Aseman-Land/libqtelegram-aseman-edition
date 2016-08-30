# AuthSentCodeType

## Types

* [typeAuthSentCodeTypeApp](#authsentcodetypetypeauthsentcodetypeapp)
* [typeAuthSentCodeTypeSms](#authsentcodetypetypeauthsentcodetypesms)
* [typeAuthSentCodeTypeCall](#authsentcodetypetypeauthsentcodetypecall)
* [typeAuthSentCodeTypeFlashCall](#authsentcodetypetypeauthsentcodetypeflashcall)

## AuthSentCodeType::typeAuthSentCodeTypeApp

#### Schema:

```c++
auth.sentCodeTypeApp#3dbb5986 length:int = auth.SentCodeType;
```

#### Parameters:

|Name|Type|
|----|----|
|length|qint32|

## AuthSentCodeType::typeAuthSentCodeTypeSms

#### Schema:

```c++
auth.sentCodeTypeSms#c000bba2 length:int = auth.SentCodeType;
```

#### Parameters:

|Name|Type|
|----|----|
|length|qint32|

## AuthSentCodeType::typeAuthSentCodeTypeCall

#### Schema:

```c++
auth.sentCodeTypeCall#5353e5a7 length:int = auth.SentCodeType;
```

#### Parameters:

|Name|Type|
|----|----|
|length|qint32|

## AuthSentCodeType::typeAuthSentCodeTypeFlashCall

#### Schema:

```c++
auth.sentCodeTypeFlashCall#ab03c6d9 pattern:string = auth.SentCodeType;
```

#### Parameters:

|Name|Type|
|----|----|
|pattern|QString|

