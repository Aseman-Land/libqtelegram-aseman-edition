# RichText

## Types

* [typeTextEmpty](#richtexttypetextempty)
* [typeTextPlain](#richtexttypetextplain)
* [typeTextBold](#richtexttypetextbold)
* [typeTextItalic](#richtexttypetextitalic)
* [typeTextUnderline](#richtexttypetextunderline)
* [typeTextStrike](#richtexttypetextstrike)
* [typeTextFixed](#richtexttypetextfixed)
* [typeTextUrl](#richtexttypetexturl)
* [typeTextEmail](#richtexttypetextemail)
* [typeTextConcat](#richtexttypetextconcat)

## RichText::typeTextEmpty

#### Schema:

```c++
textEmpty#dc3d824f = RichText;
```

#### Parameters:


## RichText::typeTextPlain

#### Schema:

```c++
textPlain#744694e0 text:string = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|

## RichText::typeTextBold

#### Schema:

```c++
textBold#6724abc4 text:RichText = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## RichText::typeTextItalic

#### Schema:

```c++
textItalic#d912a59c text:RichText = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## RichText::typeTextUnderline

#### Schema:

```c++
textUnderline#c12622c4 text:RichText = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## RichText::typeTextStrike

#### Schema:

```c++
textStrike#9bf8bb95 text:RichText = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## RichText::typeTextFixed

#### Schema:

```c++
textFixed#6c3f19b9 text:RichText = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|

## RichText::typeTextUrl

#### Schema:

```c++
textUrl#3c2884c1 text:RichText url:string webpage_id:long = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|
|url|QString|
|webpageId|qint64|

## RichText::typeTextEmail

#### Schema:

```c++
textEmail#de5a0dd6 text:RichText email:string = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|text|[RichText](richtext.md)|
|email|QString|

## RichText::typeTextConcat

#### Schema:

```c++
textConcat#7e6260d7 texts:Vector<RichText> = RichText;
```

#### Parameters:

|Name|Type|
|----|----|
|texts|QList&lt;[RichText](richtext.md)&gt;|

