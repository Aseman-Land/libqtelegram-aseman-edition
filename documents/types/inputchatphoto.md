# InputChatPhoto

## Types

* [typeInputChatPhotoEmpty](#inputchatphototypeinputchatphotoempty)
* [typeInputChatUploadedPhoto](#inputchatphototypeinputchatuploadedphoto)
* [typeInputChatPhoto](#inputchatphototypeinputchatphoto)

## InputChatPhoto::typeInputChatPhotoEmpty

#### Schema:

```c++
inputChatPhotoEmpty#1ca48f57 = InputChatPhoto;
```

#### Parameters:


## InputChatPhoto::typeInputChatUploadedPhoto

#### Schema:

```c++
inputChatUploadedPhoto#94254732 file:InputFile crop:InputPhotoCrop = InputChatPhoto;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|crop|[InputPhotoCrop](inputphotocrop.md)|

## InputChatPhoto::typeInputChatPhoto

#### Schema:

```c++
inputChatPhoto#b2e1bf08 id:InputPhoto crop:InputPhotoCrop = InputChatPhoto;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputPhoto](inputphoto.md)|
|crop|[InputPhotoCrop](inputphotocrop.md)|

