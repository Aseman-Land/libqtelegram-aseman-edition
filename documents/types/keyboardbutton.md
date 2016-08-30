# KeyboardButton

## Types

* [typeKeyboardButton](#keyboardbuttontypekeyboardbutton)
* [typeKeyboardButtonUrl](#keyboardbuttontypekeyboardbuttonurl)
* [typeKeyboardButtonCallback](#keyboardbuttontypekeyboardbuttoncallback)
* [typeKeyboardButtonRequestPhone](#keyboardbuttontypekeyboardbuttonrequestphone)
* [typeKeyboardButtonRequestGeoLocation](#keyboardbuttontypekeyboardbuttonrequestgeolocation)
* [typeKeyboardButtonSwitchInline](#keyboardbuttontypekeyboardbuttonswitchinline)

## KeyboardButton::typeKeyboardButton

#### Schema:

```c++
keyboardButton#a2fa4880 text:string = KeyboardButton;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|

## KeyboardButton::typeKeyboardButtonUrl

#### Schema:

```c++
keyboardButtonUrl#258aff05 text:string url:string = KeyboardButton;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|
|url|QString|

## KeyboardButton::typeKeyboardButtonCallback

#### Schema:

```c++
keyboardButtonCallback#683a5e46 text:string data:bytes = KeyboardButton;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|
|data|QByteArray|

## KeyboardButton::typeKeyboardButtonRequestPhone

#### Schema:

```c++
keyboardButtonRequestPhone#b16a6c29 text:string = KeyboardButton;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|

## KeyboardButton::typeKeyboardButtonRequestGeoLocation

#### Schema:

```c++
keyboardButtonRequestGeoLocation#fc796b3f text:string = KeyboardButton;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|

## KeyboardButton::typeKeyboardButtonSwitchInline

#### Schema:

```c++
keyboardButtonSwitchInline#ea1b7a14 text:string query:string = KeyboardButton;
```

#### Parameters:

|Name|Type|
|----|----|
|text|QString|
|query|QString|

